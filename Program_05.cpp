#include <iostream>                                      // Include input/output library

class Complex {                                          // Define Complex class
private:                                                 // Private access section
    int real;                                             // Store real part
    int imaginary;                                        // Store imaginary part

public:                                                  // Public access section
    Complex(int realPart = 0, int imaginaryPart = 0)    // Constructor
        : real(realPart), imaginary(imaginaryPart) {}    // Initialize real and imaginary

    Complex operator+(const Complex& other) const {      // Overload binary + operator
        return Complex(real + other.real,               // Add real parts
                       imaginary + other.imaginary);     // Add imaginary parts
    }

    Complex operator-(const Complex& other) const {      // Overload binary - operator
        return Complex(real - other.real,               // Subtract real parts
                       imaginary - other.imaginary);     // Subtract imaginary parts
    }

    void display() const {                               // Function to display complex number
        std::cout << real;                               // Display real part

        if (imaginary >= 0) {                            // Check if imaginary part is positive
            std::cout << " + ";                          // Display plus sign
        } else {                                         // If imaginary part is negative
            std::cout << " - ";                          // Display minus sign
        }

        std::cout << (imaginary >= 0 ? imaginary        // Display positive imaginary value
                                     : -imaginary)       // Convert negative value to positive
                  << "i\n";                             // Display i and move to next line
    }
};                                                       // End of Complex class

int main() {                                             // Main function begins
    Complex first(2, 3);                                 // Create first complex number
    Complex second(4, 5);                                // Create second complex number

    Complex sum = first + second;                        // Add two complex numbers
    Complex difference = first - second;                 // Subtract two complex numbers

    std::cout << "First complex number: ";                // Display label
    first.display();                                     // Display first number

    std::cout << "Second complex number: ";               // Display label
    second.display();                                    // Display second number

    std::cout << "Sum: ";                                // Display sum label
    sum.display();                                       // Display sum

    std::cout << "Difference: ";                         // Display difference label
    difference.display();                                // Display difference

    return 0;                                            // End program successfully
}