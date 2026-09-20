#include <iostream>                                      // Include input/output library

class Base {                                             // Define Base class
public:                                                  // Public access section

    virtual void display() const {                       // Declare virtual display function
        std::cout << "Base object\n";                     // Display Base object message
    }

    virtual ~Base() = default;                           // Declare virtual destructor
};                                                       // End of Base class


class Derived : public Base {                            // Define Derived class
public:                                                  // Public access section

    void display() const override {                      // Override Base display function
        std::cout << "Derived object\n";                  // Display Derived object message
    }
};                                                       // End of Derived class


void displayByValue(Base object) {                        // Function passing Base object by value
    object.display();                                    // Call display function
}


void displayByReference(const Base& object) {             // Function passing Base object by reference
    object.display();                                    // Call display function
}


void displayByPointer(const Base* object) {               // Function passing Base pointer
    object->display();                                   // Call display using pointer
}


int main() {                                             // Main function begins

    Derived derived;                                     // Create Derived object

    std::cout << "Passing by value: ";                   // Display value passing label
    displayByValue(derived);                              // Pass Derived object by value

    std::cout << "Passing by reference: ";               // Display reference passing label
    displayByReference(derived);                          // Pass Derived object by reference

    std::cout << "Passing by pointer: ";                 // Display pointer passing label
    displayByPointer(&derived);                           // Pass address of Derived object

    return 0;                                            // End program successfully
}