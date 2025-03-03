# C++ Code with Namespaces and `const` Variables

**Make sure to not skip the theory before doing practise.**

In this lesson, we’ll do two important features of C++: **Namespaces** and **`const` variables**. These concepts help in organizing and securing your code, making sure your code is better on readability and reliability, especially for larger projects.

## Name Concepts

- **Namespaces**: They are used to group related variables, functions, or classes, preventing naming conflicts. They allow you to use the same name in different parts of your program without any issues.
  
- **`const` Variables**: These variables cannot be modified after being initialized. They help protect important values, such as mathematical constants, from being changed, making your code more reliable, make sure to define them first before defining non-const variables.

## Why Not Use using namespace std

While it's common to see begineers use std:: in C++ to refer to the standard library, some developers use using namespace std to avoid writing std:: before standard library names. This is not recommended, as it can lead to naming conflicts, especially as your code grows. Always explicitly use std:: when referring to standard library components.

**const Variables**
In the second part of the code, we explore const variables. A const variable is a constant and cannot be changed after it is initialized. In the example, we calculate the circumference of a circle using Pi. If the value of Pi is accidentally/intetionally changed, the calculation would be incorrect.

## Wrapping Up

By the end of this lesson, you’ll have learned:

- How to secure variables
- How to use namespace's
- Knownladge that variables can have the same name as long they are in different namespaces

Thanks for reading and being on the third lesson. Also, the day I'm doing this is almost christmas, so, happy christmas!!!!

If you want to stop reading the basics and go to official documentation which is also an option, you can do it here:

[Official C++/Cpp Documentation](https://learn.microsoft.com/en-us/cpp/cpp/?view=msvc-170)
