#include <iostream>

int main() {
    // --- Arithmetic Operators --- \\
    // Arithmetic operators allow you to perform basic math operations.

    int a = 10;  // First number
    int b = 5;   // Second number

    // Addition (+)
    std::cout << "Addition (a + b): "           << a + b << '\n';

    // Subtraction (-)
    std::cout << "Subtraction (a - b): "        << a - b << '\n';

    // Multiplication (*)
    std::cout << "Multiplication (a * b): "     << a * b << '\n';

    // Division (/)
    std::cout << "Division (a / b): " << a / b  << '\n';

    // Modulus (%) - gives the remainder of the division
    std::cout << "Modulus (a % b): " << a % b   << '\n' << '\n';

    // --- Math Logic --- \\
    // Math logic is when you use these operators to solve problems.

    int c = 8;
    int d = 3;

    // Increment (++): Adds 1 to the variable
    std::cout << "Before Increment: c = "       << c << '\n';
    c++;
    std::cout << "After Increment (c++): c = "  << c << '\n';

    // Decrement (--): Subtracts 1 from the variable
    std::cout << "Before Decrement: d = "       << d << '\n';
    d--;
    std::cout << "After Decrement (d--): d = "  << d << '\n';

    // Parentheses () - Grouping for order of operations
    std::cout << "Order of operations (a + b * c): " << a + b * c << '\n';
    std::cout << "Using parentheses to change the order ((a + b) * c): " << (a + b) * c << '\n';

    // Combining multiple operations
    int result = a + b - c * d;
    std::cout << "Combined operations (a + b - c * d): " << result << '\n' << '\n';

    // --- Division with decimal results --- \\
    // Division with integers gives only whole numbers. To get decimal results, use floating-point numbers.
    double x = 10;
    double y = 4;

    std::cout << "Division with integers (10 / 4): " << a / b << '\n';
    std::cout << "Division with decimals (10.0 / 4.0): " << x / y << '\n' << '\n';

    // --- Advanced Math Logic --- \\
    // You can use math logic to calculate things like areas or averages.

    // Example: Calculate the average of three numbers
    int num1 = 15, num2 = 20, num3 = 25;
    double average = (num1 + num2 + num3) / 3.0;  // 3.0 makes the division a decimal operation

    std::cout << "The average of 15, 20, and 25 is: " << average << '\n';

    // Example: Area of a circle
    const double PI = 3.14;  // Pi is a constant value
    double radius = 5.0;
    double area = PI * radius * radius;

    std::cout << "The area of a circle with radius 5 is: " << area << '\n';

    // --- Conclusion --- \\
    // That's the arithmetic operators and math logic in C++ | I've tried to cover pretty much all the bases.

    return 0;
}
