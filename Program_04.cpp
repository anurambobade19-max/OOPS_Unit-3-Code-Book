#include <iostream> // Gives access to cout for printing output

class Counter { // Defines a custom class named Counter
private: // Private section: hidden data accessible only inside the class
    int value; // Stores the counter value as a whole number

public: // Public section: functions accessible from outside the class
    explicit Counter(int initialValue = 0) : value(initialValue) {} // Constructor to set initial counter value (default is 0)

    Counter& operator++() { // Prefix increment operator (++counter)
        ++value;            // Increases value by 1 first
        return *this;       // Returns the updated counter object
    }

    Counter operator++(int) { // Postfix increment operator (counter++)
        Counter old = *this;  // Saves the old counter state first
        ++value;              // Increases value by 1
        return old;           // Returns the saved old counter object
    }

    // MODIFICATION TASK: Prefix decrement operator (--counter)
    Counter& operator--() { // Prefix decrement operator (--counter)
        --value;            // Decreases value by 1 first
        return *this;       // Returns the updated counter object
    }

    // MODIFICATION TASK: Postfix decrement operator (counter--)
    Counter operator--(int) { // Postfix decrement operator (counter--)
        Counter old = *this;  // Saves the old counter state first
        --value;              // Decreases value by 1
        return old;           // Returns the saved old counter object
    }

    void display() const { // Function to print current counter value
        std::cout << value << '\n'; // Prints value followed by a new line
    }
};

int main() { // Main function where the program starts running
    Counter counter(5); // Creates a Counter object starting at 5

    // INCREMENT DEMO (ORIGINAL CODE)
    std::cout << "After prefix increment: "; // Prints label for prefix ++
    ++counter;                               // Increases value from 5 to 6
    counter.display();                       // Displays: 6

    std::cout << "Value returned by postfix increment: "; // Prints label for postfix ++
    Counter oldValue = counter++;                         // Stores old value (6) and increases counter to 7
    oldValue.display();                                   // Displays: 6

    std::cout << "Counter after postfix increment: "; // Prints label for current counter value
    counter.display();                                // Displays: 7

    // DECREMENT DEMO (MODIFICATION TASK)
    std::cout << "After prefix decrement: "; // Prints label for prefix --
    --counter;                               // Decreases value from 7 to 6
    counter.display();                       // Displays: 6

    std::cout << "Value returned by postfix decrement: "; // Prints label for postfix --
    Counter oldDecValue = counter--;                      // Stores old value (6) and decreases counter to 5
    oldDecValue.display();                                // Displays: 6

    std::cout << "Counter after postfix decrement: "; // Prints label for current counter value
    counter.display();                                // Displays: 5

    return 0; // Signals that the program finished successfully
}