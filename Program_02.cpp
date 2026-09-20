#include <iostream> // Gives access to cout for printing output

int calculateArea(int side) { // Function to find area of a square using 1 whole number
    return side * side;       // Multiplies side by itself and gives back the result
}

int calculateArea(int length, int width) { // Function to find area of a rectangle using 2 whole numbers
    return length * width;                 // Multiplies length by width and gives back the result
}

double calculateArea(double radius) {        // Function to find area of a circle using 1 decimal number
    constexpr double PI = 3.141592653589793; // Stores the exact value of PI
    return PI * radius * radius;             // Calculates PI * r * r and gives back the result
}

// MODIFICATION TASK: Function to find area of a triangle using 2 decimal numbers
double calculateArea(double base, double height) { // Overloaded function for triangle area
    return 0.5 * base * height;                    // Calculates 0.5 * base * height and gives back the result
}

int main() { // Main function where the program starts running
    std::cout << "Square Area: " << calculateArea(5) << '\n';       // Runs square function with 1 integer and prints 25
    std::cout << "Rectangle Area: " << calculateArea(6, 4) << '\n'; // Runs rectangle function with 2 integers and prints 24
    std::cout << "Circle Area: " << calculateArea(2.0) << '\n';     // Runs circle function with 1 double and prints 12.5664

    std::cout << "Triangle Area: " << calculateArea(5.0, 4.0) << '\n'; // Runs triangle function with 2 doubles and prints 10

    return 0; // Signals that the program finished successfully
}