#include <iostream>
#include <string> // Include string for std::string usage

int main() {

    // VARIABLES IN C++
    // - int: Whole numbers, e.g., 1, 2, 3. Note: no decimals! 
    // - double: Decimal numbers, e.g., 1.5, 2.3. Note: it's not a comma!
    // - char: Single characters, e.g., 'A', '9', '$'
    // - bool: Boolean values, either true or false
    // - std::string: A sequence of characters (text), e.g., "Hello, World!" - requires #include <string>

    // Int variables example
    int age = 3;
    int year = 2024;
    int month = 12, day = 20; // Multiple declarations on one line(you can do this, but it's not always recommended)

    // Double variables example
    double temperature = 32.99;
    double productPrice = 64.43;

    // Character variables
    char initial = 'M';
    char alphabetStartChar = 'A';
    char euroCurrency = '$';

    // bolean (true or false)
    bool gameOver = false;
    bool gameWon = true;

    // String 
    std::string fullName = "Jonh Cool";
    std::string weekday = "Saturday";
    std::string country = "United States Of America.";

    std::cout << "Hello, I am " << fullName << " today is finally " << weekday << ". Also, I live in " << country << " What about you?" << '\n';

    // the rest of the code still about variables and I recommend reading it.

    int x;                                                                                              // We declare X as an variable 
    int y;                                                                                              // We declare Y as an variable
    int z;                                                                                              // We declare Z as an variable
    
    /* OBS: Depending on what variable and what you doing, if it's a static variable with a static value you wanna define it like this:
    int staticValueVariable = 45;
    */

    x = 5;                                                                                              // We define the value of X
    y = 1;                                                                                              // We define the value of Y
    z = 3;                                                                                              // We define the value of Z

    std::cout << x << '\n';                                                                             // We print the value of X
    std::cout << y << '\n';                                                                             // We print the value of Y
    std::cout << z << '\n';                                                                             // We print the value of z

    std::cout << '\n' << "The main characther is located at: " << x << ", " << y << ", " << z << '\n';  // Example print you could do with those numbers

    std::cout << '\n';                                                                                  // Make a new enter for a more organised approach

    // Simple math operations
    int a = 10, b = 4;
    std::cout << "Addition: "           << a << " + " << b << " = " << (a + b) << '\n';
    std::cout << "Subtraction: "        << a << " - " << b << " = " << (a - b) << '\n';
    std::cout << "Multiplication: "     << a << " * " << b << " = " << (a * b) << '\n';
    std::cout << "Integer Division: "   << a << " / " << b << " = " << (a / b) << '\n';

    // Note on integer division:
    // Division of two integers always results in an integer. For example, 10 / 4 = 2 (not 2.5).
    return 0; // Don't forget this
}