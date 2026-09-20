#include <iostream>                                      // Include input/output library

class Shape {                                            // Define abstract base class Shape
public:                                                  // Public access section

    virtual double area() const = 0;                     // Declare pure virtual area function

    virtual ~Shape() = default;                          // Virtual destructor
};                                                       // End of Shape class


class Rectangle : public Shape {                         // Define Rectangle derived class
private:                                                 // Private access section
    double length;                                       // Store rectangle length
    double width;                                        // Store rectangle width

public:                                                  // Public access section

    Rectangle(double givenLength, double givenWidth)     // Rectangle constructor
        : length(givenLength), width(givenWidth) {}      // Initialize length and width

    double area() const override {                       // Override area function
        return length * width;                            // Calculate rectangle area
    }
};                                                       // End of Rectangle class


class Triangle : public Shape {                          // Define Triangle derived class
private:                                                 // Private access section
    double base;                                         // Store triangle base
    double height;                                       // Store triangle height

public:                                                  // Public access section

    Triangle(double givenBase, double givenHeight)       // Triangle constructor
        : base(givenBase), height(givenHeight) {}        // Initialize base and height

    double area() const override {                       // Override area function
        return 0.5 * base * height;                      // Calculate triangle area
    }
};                                                       // End of Triangle class


int main() {                                             // Main function begins

    Rectangle rectangle(8.0, 4.0);                       // Create Rectangle object
    Triangle triangle(6.0, 4.0);                         // Create Triangle object

    std::cout << "Rectangle Area: "                     // Display rectangle area label
              << rectangle.area() << '\n';               // Calculate and display rectangle area

    std::cout << "Triangle Area: "                       // Display triangle area label
              << triangle.area() << '\n';                 // Calculate and display triangle area

    return 0;                                            // End program successfully
}