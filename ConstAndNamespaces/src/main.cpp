#include <iostream>

namespace coolNameSpace{
    int xyz = 4;
}

namespace SecondCoolNameSpace{
    int xyz = 5;
}

int main() {
    // -------- NAMESPACES -------- \\ 
    
    // Namespaces are a way to group related code together. They help avoid naming conflicts, especially in medium-big port projects
    // Each namespace has its own scope, allowing you to use the same name for different variables in different namespaces

    std::cout << "This is the xyz of the first character: " << coolNameSpace::xyz 
    << " | This is the xyz of the second character: " << SecondCoolNameSpace::xyz;

    // As you can see, you can use variables with the same name in different namespaces without causing conflicts

    // A note on using `using namespace std`:
    // NEVER use "using namespace std" in your programs. While it might seem easier to omit the `std::` prefix, 
    // this practice can lead to potential naming conflicts and unclear code, especially in larger programs.
    // It can reduce the performance and readability of your code, so always explicitly use `std::` for standard library entities.
    // If you ever see someone using `using namespace std;`, just stop them from doin it
    
    // -------- CONST VARIABLES -------- \\ 

    double insecurePi = 3.14;       // Regular variable, not protected
    insecurePi = 12491.4;           // Someone changed the value of Pi
    double radius = 10;             // Circle's radius
    double circumference = 2 * insecurePi * radius;

    std::cout << circumference << "cm of the insecure pi" << '\n';

    /*
    - Const and why it's important -
    When you're making games, apps, or anything that needs to be secure and reliable, 
    you want to use `const` variables to protect certain values from being changed.

    - Why? Let's take a look. -

    In the code above, we are calculating the circumference of a circle. 
    But what happens if someone accidentally (or intentionally) changes the value of `insecurePi`? 
    Instead of being 3.14, it becomes 12491.4, which makes no sense for Pi. This messes up a lot our calculations.

    To make sure the value of Pi stays the same and can't be changed, we can use a `const` variable.
    Now, look at the next part of the code.
    */

    const double SECUREDPI = 3.14;  // Constant variable, can't be changed
    SECUREDPI = 1.312;              // Error: You can't change a `const` variable
    double twoRadius = 10;
    double twoCircumference = 2 * SECUREDPI * twoRadius;

    std::cout << twoCircumference << "cm of the secured pi";

    /*
    As you can see, trying to reassign a value to `SECUREDPI` causes an error, and the program won't compile. 
    This is because the value of a `const` variable is now protected, which means no accidental changes. 
    To fix this, simply remove the re-assignment of `SECUREDPI`. Its value is safe and consistent now.
    Also, don't do like I already seen before, people trying to add `const` after the variable type, that's just... `const` comes ALWAYS before the variable type
    */
    return 0;
}
