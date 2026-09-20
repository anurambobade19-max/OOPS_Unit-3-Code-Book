#include <iostream>                                      // Include input/output library

class Shape {                                             // Define base class Shape
public:                                                  // Public access section

    virtual double area() const {                        // Declare virtual area function
        return 0.0;                                      // Return default area
    }

    virtual ~Shape() = default;                          // Virtual destructor
};                                                       // End of Shape class


class Rectangle : public Shape {                         // Define Rectangle derived class
private:                                                 // Private access section
    double length;                                       // Store rectangle length
    double width;                                        // Store rectangle width

public:                                                  // Public access section

    Rectangle(double givenLength, double givenWidth)    // Rectangle constructor
        : length(givenLength), width(givenWidth) {}      // Initialize length and width

    double area() const override {                       // Override Shape's area function
        return length * width;                           // Calculate rectangle area
    }
};                                                       // End of Rectangle class


class Circle : public Shape {                            // Define Circle derived class
private:                                                 // Private access section
    double radius;                                       // Store circle radius

public:                                                  // Public access section

    explicit Circle(double givenRadius)                 // Circle constructor
        : radius(givenRadius) {}                         // Initialize radius

    double area() const override {                       // Override Shape's area function
        constexpr double PI = 3.141592653589793;         // Define value of PI
        return PI * radius * radius;                     // Calculate circle area
    }
};                                                       // End of Circle class


void printArea(const Shape& shape) {                     // Function accepting Shape reference
    std::cout << "Area: " << shape.area() << '\n';       // Display calculated area
}


int main() {                                             // Main function begins

    Rectangle rectangle(5.0, 3.0);                       // Create Rectangle object
    Circle circle(2.0);                                  // Create Circle object

    printArea(rectangle);                                // Pass Rectangle to printArea
    printArea(circle);                                   // Pass Circle to printArea

    return 0;                                            // End program successfully
}