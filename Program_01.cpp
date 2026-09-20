#include <iostream> // Gives access to cout for printing output
#include <string>   // Gives access to std::string for handling text

int add(int first, int second) { // Function to add two whole numbers
    return first + second;       // Adds two numbers and gives back the result
}

double add(double first, double second) { // Function to add two decimal numbers
    return first + second;                // Adds two decimal numbers and gives back the result
}

int add(int first, int second, int third) { // Function to add three whole numbers
    return first + second + third;          // Adds three numbers and gives back the result
}

std::string add(const std::string& first, const std::string& second) { // Function to join two text strings
    return first + second;                                              // Joins two words together and gives back the result
}

int main() { // Main function where the program starts running
    std::cout << "Sum of two integers: " << add(10, 20) << '\n';       // Runs add(int, int) and prints 30
    std::cout << "Sum of two doubles: " << add(2.5, 3.7) << '\n';       // Runs add(double, double) and prints 6.2
    std::cout << "Sum of three integers: " << add(10, 20, 30) << '\n'; // Runs add(int, int, int) and prints 60

    std::string str1 = "Hello, "; // Creates first text variable
    std::string str2 = "World!";  // Creates second text variable

    std::cout << "Concatenation of two strings: " << add(str1, str2) << '\n'; // Runs add(string, string) and prints "Hello, World!"

    return 0; // Signals that the program finished successfully
}