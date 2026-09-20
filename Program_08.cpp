#include <iostream>                                      // Include input/output library

class Base {                                             // Define Base class
public:                                                  // Public access section
    void display() const {                               // Define Base display function
        std::cout << "Base display function\n";          // Display Base message
    }
};                                                       // End of Base class

class Derived : public Base {                            // Define Derived class inheriting Base
public:                                                  // Public access section
    void display() const {                               // Define Derived display function
        std::cout << "Derived display function\n";       // Display Derived message
    }
};                                                       // End of Derived class

int main() {                                             // Main function begins
    Derived derivedObject;                               // Create an object of Derived class

    Base* basePointer = &derivedObject;                  // Base pointer points to Derived object

    std::cout << "Using base pointer: ";                 // Display label for base pointer call
    basePointer->display();                              // Call Base display because function is not virtual

    std::cout << "Using derived object: ";               // Display label for direct call
    derivedObject.display();                             // Directly call Derived display function

    return 0;                                            // End program successfully
}