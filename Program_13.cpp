#include <iostream>                                      // Include input/output library

class Base {                                             // Define Base class
public:                                                  // Public access section

    virtual ~Base() {                                    // Declare virtual destructor
        std::cout << "Base destructor\n";                // Display Base destructor message
    }
};                                                       // End of Base class


class Derived : public Base {                            // Define Derived class
public:                                                  // Public access section

    ~Derived() override {                                // Override Base destructor
        std::cout << "Derived destructor\n";             // Display Derived destructor message
    }
};                                                       // End of Derived class


int main() {                                             // Main function begins

    Base* pointer = new Derived();                       // Create Derived object using Base pointer

    delete pointer;                                      // Delete object through Base pointer

    return 0;                                            // End program successfully
}