#include <iostream>                                      // Include input/output library

class Complex {                                          // Define Complex class
private:                                                 // Private access section
    int real;                                             // Store real part
    int imaginary;                                        // Store imaginary part

public:                                                  // Public access section
    Complex(int realPart = 0, int imaginaryPart = 0)    // Constructor
        : real(realPart), imaginary(imaginaryPart) {}    // Initialize real and imaginary parts

    friend Complex operator+(int value, const Complex& number); // Declare friend + operator
    friend Complex operator-(int value, const Complex& number); // Declare friend - operator

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

Complex operator+(int value, const Complex& number) {     // Define friend + operator
    return Complex(value + number.real,                 // Add integer to real part
                   number.imaginary);                    // Keep imaginary part unchanged
}

Complex operator-(int value, const Complex& number) {     // Define friend - operator
    return Complex(value - number.real,                 // Subtract real part from integer
                   -number.imaginary);                   // Negate imaginary part
}

int main() {                                             // Main function begins
    Complex number(2, 3);                                // Create complex number 2 + 3i

    Complex result = 10 + number;                        // Perform 10 + complex number
    Complex difference = 10 - number;                    // Perform 10 - complex number

    std::cout << "Result of addition: ";                 // Display addition label
    result.display();                                    // Display addition result

    std::cout << "Result of subtraction: ";              // Display subtraction label
    difference.display();                                // Display subtraction result

    return 0;                                            // End program successfully
}