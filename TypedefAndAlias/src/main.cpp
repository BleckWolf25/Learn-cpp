#include <iostream>
#include <vector> // Include this so we can use data types

/* What is typedef?
    Typedef is a keyword to create an alias for a data type. It acts as a new identifier for an existing type.
    This helps A LOT with readability and reduces the amount of words you have to type, leading to faster development.
*/

typedef std::string string_t;   // Now we don’t have to write `std::string` every time we define a variable
typedef std::int16_t number_t;  // Now we don’t have to write `std::int16_t` every time we define a variable

int main() {
    // Definition
    string_t description = "Red, sweet, doctors love it and this fruit is pretty";
    number_t enjoyableStat = 10;  // Game example (stat of something)

    // Prints
    std::cout << "Try to guess the fruit: " << description << '\n';
    std::cout << "If you eat this fruit, your hunger will go away since this fruit's enjoyable stat is " 
              << enjoyableStat << ".";
    
    return 0;
}
