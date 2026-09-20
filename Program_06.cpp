#include <iostream>                                      // Include input/output library

class Distance {                                         // Define Distance class
private:                                                 // Private access section
    int meters;                                          // Store distance in meters

public:                                                  // Public access section
    explicit Distance(int value) : meters(value) {}      // Constructor to initialize meters

    bool operator>(const Distance& other) const {        // Overload > operator
        return meters > other.meters;                    // Compare two distance values
    }

    bool operator==(const Distance& other) const {       // Overload == operator
        return meters == other.meters;                   // Check if distances are equal
    }

    void display() const {                               // Function to display distance
        std::cout << meters << " meters\n";              // Display distance in meters
    }
};                                                       // End of Distance class

int main() {                                             // Main function begins
    Distance first(120);                                 // Create first Distance object
    Distance second(90);                                 // Create second Distance object

    std::cout << "First distance: ";                      // Display first distance label
    first.display();                                     // Display first distance

    std::cout << "Second distance: ";                     // Display second distance label
    second.display();                                    // Display second distance

    if (first > second) {                                // Check if first is greater
        std::cout << "First distance is greater\n";     // Display greater message
    } else {                                             // If first is not greater
        std::cout << "Second distance is greater or equal\n"; // Display second message
    }

    if (first == second) {                               // Check if both distances are equal
        std::cout << "Both distances are equal\n";       // Display equal message
    } else {                                             // If distances are not equal
        std::cout << "Distances are not equal\n";        // Display not equal message
    }

    return 0;                                            // End program successfully
}