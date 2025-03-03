# C++23 Cheatsheet

This document provides a concise reference for key features and changes introduced in C++23, the latest standard of the C++ programming language as of 2023. It focuses on new language features, standard library additions, and improvements, formatted for quick lookup.

---

## New Language Features

- **`std::expected<T, E>`**  
  Represents either a value of type `T` or an error of type `E`. Useful for error handling without exceptions.  

  ```cpp
  #include <expected>
  #include <string>
  std::expected<int, std::string> parse_int(const std::string& s) {
      try {
          return std::stoi(s);
      } catch (...) {
          return std::unexpected<std::string>("Parse error");
      }
  }
  // Usage
  auto result = parse_int("123");
  if (result) {
      std::cout << *result << '\n'; // 123
  } else {
      std::cout << result.error() << '\n'; // Parse error
  }
  ```

- **`std::generator`**  
  Simplifies creating generators for lazy sequence generation using coroutines.  

  ```cpp
  #include <generator>
  std::generator<int> range(int start, int end) {
      for (int i = start; i < end; ++i) {
          co_yield i;
      }
  }
  // Usage
  for (auto i : range(1, 5)) {
      std::cout << i << ' '; // 1 2 3 4
  }
  ```

- **`[[assume(expr)]]`**  
  Attribute to inform the compiler that `expr` is assumed true, enabling optimizations.  

  ```cpp
  void process(int* ptr) {
      [[assume(ptr != nullptr)]];
      *ptr = 42; // Compiler optimizes assuming ptr is valid
  }
  ```

- **`if consteval`**  
  Conditional compilation based on whether a function is evaluated at compile-time.  

  ```cpp
  constexpr int foo() {
      if consteval {
          return 42; // Compile-time
      } else {
          return 0;  // Runtime
      }
  }
  static_assert(foo() == 42); // True at compile-time
  ```

- **Auto in Function Parameters**  
  Allows `auto` in parameters to create generic functions without explicit templates.  

  ```cpp
  void print(auto const& x) {
      std::cout << x << '\n';
  }
  // Usage
  print(42);     // int
  print("hello"); // const char*
  ```

---

## Standard Library Additions

- **`std::flat_map<K, V>` and `std::flat_set<T>`**  
  Contiguous containers for better cache performance compared to traditional `map` and `set`.  

  ```cpp
  #include <flat_map>
  std::flat_map<int, std::string> fm = {{1, "one"}, {2, "two"}};
  std::cout << fm[1] << '\n'; // one
  ```

- **`std::mdspan`**  
  Multi-dimensional view of contiguous memory, ideal for arrays.  

  ```cpp
  #include <mdspan>
  double data[12];
  std::mdspan<double, std::extents<3, 4>> mds(data);
  mds[1, 2] = 5.0; // Access 2D element
  ```

- **`std::print` and `std::println`**  
  Simplified output functions with `std::format`-style formatting.  

  ```cpp
  #include <print>
  std::print("Hello, {}!\n", "world"); // Manual newline
  std::println("Value: {}", 42);       // Auto newline
  ```

- **`std::string::contains`**  
  Checks if a string contains a substring or character.  

  ```cpp
  #include <string>
  std::string s = "Hello, world";
  if (s.contains("world")) {
      std::cout << "Found\n"; // Found
  }
  ```

---

## Improvements

- **Ranges Library**  
  New views and adaptors like `std::views::chunk` and `std::views::slide` for advanced range manipulations.  

  ```cpp
  #include <ranges>
  auto chunks = std::views::iota(0, 6) | std::views::chunk(2);
  for (auto chunk : chunks) {
      for (auto i : chunk) {
          std::cout << i << ' '; // 0 1  2 3  4 5
      }
      std::cout << '\n';
  }
  ```

- **Formatting Library**  
  Enhanced `std::format` with better support for custom types.  

  ```cpp
  #include <format>
  struct Point { int x, y; };
  template<> struct std::formatter<Point> {
      constexpr auto parse(auto& ctx) { return ctx.begin(); }
      auto format(const Point& p, auto& ctx) const {
          return std::format_to(ctx.out(), "({}, {})", p.x, p.y);
      }
  };
  std::string s = std::format("Point: {}", Point{1, 2}); // Point: (1, 2)
  ```

- **Folding Algorithms for Ranges**  
  New algorithms like `std::ranges::fold_left` for reducing ranges.  

  ```cpp
  #include <ranges>
  #include <numeric>
  std::vector<int> vec = {1, 2, 3};
  auto sum = std::ranges::fold_left(vec, 0, std::plus{});
  std::cout << sum << '\n'; // 6
  ```

---

## Deprecations and Removals

- **To Be Confirmed**  
  C++23 may deprecate or remove older features (e.g., certain C headers or pre-C++20 utilities), but specific removals are not widely highlighted in early documentation. Check the official ISO standard or compiler notes for details.
  This is just a fast-reading document about C++ 23 changes from 21 -> 23, some information might be outdated or incorrect.
