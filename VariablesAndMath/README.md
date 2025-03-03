# Understanding Variables and Basic Math in C++

**Make sure to not skip the theory before doing practise.**

In this lesson, we’ll do **variables** in C++ and some **basic math operations**.

## Variables in C++

Think Variables as placeholders for data in your program. In C++, you must declare a variable with a specific type before using it. Here are the variable types:

| Type         | Description                        | Example                       |
|--------------|------------------------------------|-------------------------------|
| `int`        | Whole numbers (no decimals)        | `int age = 25;`               |
| `double`     | Decimal numbers                    | `double price = 19.99;`       |
| `char`       | Single characters                  | `char grade = 'A';`           |
| `bool`       | Boolean values (`true`/`false`)    | `bool gameOver = false;`      |
| `std::string`| Sequences of characters (text)     | `std::string name = "Alice";` |

### Declaring Variables

You can declare variables in one line:

```cpp
int age = 25;
double price = 19.99;
```

You can also declare multiple variables in one line:

```cpp
int day = 20, month = 12, year = 2024;
```

However, it’s often better to read to declare variables individually.

### Basic Math Operations & When to Use C++  

C++ supports all standard mathematical operations and offers very good performance, making it an ideal choice for tasks that require speed and efficiency. However, while C++ is powerful, it's not always the best tool for every situation.  

For simpler tasks or when rapid development is more important than raw performance, you might find yourself turning to higher-level languages like Python, JavaScript, some cases even Lua. These languages often offer simpler syntax and faster prototype capabilities.  

Remember:  

- **Use C++ when performance matters**, such as in game development, system programming or resource-intensive applications.  
- **Use high-level languages for less demanding tasks** or when you need to prioritize simplicity and development speed.  

C++ is a great tool in your toolbox, but knowing when to use it, is just as important as mastering the language itself.

### Note on Integer Division

When dividing two integers in C++, the result is also an integer. For example:

```cpp
int a = 10, b = 4;
std::cout << a / b; // Output: 2 (not 2.5)
```

If you need the decimal result, use the `double` type:

```cpp
double c = 10.0, d = 4.0;
std::cout << c / d; // Output: 2.5
```

## Wrapping Up

By the end of this lesson, you’ll have learned:

- How to declare and initialize variables in C++
- The variable types and their uses
- Performing simple math operations
- How integer and decimal division differ in C++
- A better project structure (if you noticed how it's organised)

### Practice Exercise

Create a program that:

1. Declares variables for your name, age, and favorite number.
2. Prints them using `std::cout`.
3. Adds two numbers and displays the result.

Good luck, and good coding. Also, the day I'm doing this is almost christmas, so, happy christmas!!!!

If you want to stop reading the basics and go to official documentation which is also an option, you can do it here:

[Official C++/Cpp Documentation](https://learn.microsoft.com/en-us/cpp/cpp/?view=msvc-170)
