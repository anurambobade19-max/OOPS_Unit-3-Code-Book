#include <iostream> // Gives access to cout for printing output

class Number { // Defines a custom class named Number
private: // Private section: hidden data accessible only inside the class
    int value; // Stores the number value as a whole number

public: // Public section: functions accessible from outside the class
    explicit Number(int givenValue) : value(givenValue) {} // Constructor to set the initial number value

    Number operator-() const { // Overloads unary minus operator (-) to negate the number
        return Number(-value); // Returns a new Number object with negated value
    }

    void display() const { // Function to print the number value
        std::cout << value << '\n'; // Prints value followed by a new line
    }
};

// MODIFICATION TASK: Balance class with overloaded unary minus operator
class Balance { // Defines a custom class named Balance
private: // Private section: hidden data accessible only inside the class
    double amount; // Stores the balance amount as a decimal number

public: // Public section: functions accessible from outside the class
    explicit Balance(double initialAmount) : amount(initialAmount) {} // Constructor to set the initial balance

    Balance operator-() const { // Overloads unary minus operator (-) to show negative balance
        return Balance(-amount); // Returns a new Balance object with negative amount
    }

    void display() const { // Function to print the balance value
        std::cout << amount << '\n'; // Prints balance followed by a new line
    }
};

int main() { // Main function where the program starts running
    // ORIGINAL PROGRAM DEMO
    Number first(25); // Creates a Number object with value 25
    Number second = -first; // Calls first.operator-() to negate the value

    std::cout << "Original value: "; // Prints label for original number
    first.display(); // Displays: 25

    std::cout << "Negated value: "; // Prints label for negated number
    second.display(); // Displays: -25

    // MODIFICATION TASK
    Balance originalBalance(1500.75); // Creates a Balance object with amount 1500.75
    Balance negativeBalance = -originalBalance; // Calls originalBalance.operator-() to negate the balance

    std::cout << "Original Balance: "; // Prints label for original balance
    originalBalance.display(); // Displays: 1500.75

    std::cout << "Negative Balance: "; // Prints label for negative balance
    negativeBalance.display(); // Displays: -1500.75

    return 0; // Signals that the program finished successfully
}