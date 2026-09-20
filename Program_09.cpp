#include <iostream>                                      // Include input/output library

class Animal {                                           // Define base class Animal
public:                                                  // Public access section

    virtual void sound() const {                         // Declare virtual sound function
        std::cout << "Animal makes a sound\n";           // Display animal sound message
    }

    virtual ~Animal() = default;                         // Virtual destructor
};                                                       // End of Animal class


class Dog : public Animal {                              // Define Dog derived class
public:                                                  // Public access section

    void sound() const override {                        // Override Animal's sound function
        std::cout << "Dog barks\n";                      // Display dog sound
    }
};                                                       // End of Dog class


class Cat : public Animal {                              // Define Cat derived class
public:                                                  // Public access section

    void sound() const override {                        // Override Animal's sound function
        std::cout << "Cat meows\n";                      // Display cat sound
    }
};                                                       // End of Cat class


class Cow : public Animal {                              // Define Cow derived class
public:                                                  // Public access section

    void sound() const override {                        // Override Animal's sound function
        std::cout << "Cow moos\n";                       // Display cow sound
    }
};                                                       // End of Cow class


int main() {                                             // Main function begins

    Dog dog;                                             // Create Dog object
    Cat cat;                                             // Create Cat object
    Cow cow;                                             // Create Cow object

    Animal* animal = &dog;                               // Base pointer points to Dog object
    animal->sound();                                     // Calls Dog's sound function

    animal = &cat;                                       // Base pointer points to Cat object
    animal->sound();                                     // Calls Cat's sound function

    animal = &cow;                                       // Base pointer points to Cow object
    animal->sound();                                     // Calls Cow's sound function

    return 0;                                            // End program successfully
}