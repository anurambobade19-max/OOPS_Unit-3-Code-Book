#include <iostream>                                      // Include input/output library
#include <memory>                                        // Include smart pointer library
#include <vector>                                         // Include vector library

class Shape {                                             // Define abstract base class Shape
public:                                                  // Public access section

    virtual double area() const = 0;                     // Declare pure virtual area function
    virtual void displayName() const = 0;                // Declare pure virtual displayName function

    virtual ~Shape() = default;                          // Declare virtual destructor
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

    void displayName() const override {                  // Override displayName function
        std::cout << "Rectangle";                         // Display Rectangle name
    }
};                                                       // End of Rectangle class


class Circle : public Shape {                            // Define Circle derived class
private:                                                 // Private access section
    double radius;                                       // Store circle radius

public:                                                  // Public access section

    explicit Circle(double givenRadius)                 // Circle constructor
        : radius(givenRadius) {}                         // Initialize radius

    double area() const override {                       // Override area function
        constexpr double PI = 3.141592653589793;         // Define value of PI
        return PI * radius * radius;                     // Calculate circle area
    }

    void displayName() const override {                  // Override displayName function
        std::cout << "Circle";                            // Display Circle name
    }
};                                                       // End of Circle class


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

    void displayName() const override {                  // Override displayName function
        std::cout << "Triangle";                         // Display Triangle name
    }
};                                                       // End of Triangle class


int main() {                                             // Main function begins

    std::vector<std::unique_ptr<Shape>> shapes;          // Create vector of Shape smart pointers

    shapes.push_back(                                     // Add Rectangle to vector
        std::make_unique<Rectangle>(5.0, 3.0));           // Create Rectangle object

    shapes.push_back(                                     // Add Circle to vector
        std::make_unique<Circle>(2.0));                   // Create Circle object

    shapes.push_back(                                     // Add Triangle to vector
        std::make_unique<Triangle>(6.0, 4.0));            // Create Triangle object

    for (const auto& shape : shapes) {                    // Loop through all Shape objects
        shape->displayName();                             // Display the actual shape name
        std::cout << " Area: " << shape->area() << '\n'; // Display calculated area
    }

    return 0;                                            // End program successfully
}