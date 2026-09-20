#include <iostream>                                      // Include input/output library
#include <string>                                        // Include string library

class Payment {                                          // Define abstract base class
public:                                                  // Public access section

    virtual void pay(double amount) const = 0;           // Declare pure virtual pay function

    virtual ~Payment() = default;                        // Declare virtual destructor
};                                                       // End of Payment class


class CardPayment : public Payment {                     // Define CardPayment class
public:                                                  // Public access section

    void pay(double amount) const override {             // Override pay function
        std::cout << "Paid Rs. " << amount               // Display payment amount
                  << " using card\n";                    // Display payment method
    }
};                                                       // End of CardPayment class


class UpiPayment : public Payment {                      // Define UpiPayment class
public:                                                  // Public access section

    void pay(double amount) const override {             // Override pay function
        std::cout << "Paid Rs. " << amount               // Display payment amount
                  << " using UPI\n";                     // Display payment method
    }
};                                                       // End of UpiPayment class


class NetBankingPayment : public Payment {               // Define NetBankingPayment class
public:                                                  // Public access section

    void pay(double amount) const override {             // Override pay function
        std::cout << "Paid Rs. " << amount               // Display payment amount
                  << " using net banking\n";             // Display payment method
    }
};                                                       // End of NetBankingPayment class


class WalletPayment : public Payment {                   // Define WalletPayment class
public:                                                  // Public access section

    void pay(double amount) const override {             // Override pay function
        std::cout << "Paid Rs. " << amount               // Display payment amount
                  << " using wallet\n";                  // Display payment method
    }
};                                                       // End of WalletPayment class


void processPayment(const Payment& payment,              // Function accepts Payment reference
                    double amount) {                     // Receive payment amount
    payment.pay(amount);                                  // Call appropriate payment function
}


int main() {                                             // Main function begins

    CardPayment card;                                    // Create CardPayment object
    UpiPayment upi;                                      // Create UpiPayment object
    NetBankingPayment netBanking;                        // Create NetBankingPayment object
    WalletPayment wallet;                                // Create WalletPayment object

    processPayment(card, 1250.0);                        // Process card payment
    processPayment(upi, 750.0);                          // Process UPI payment
    processPayment(netBanking, 500.0);                   // Process net banking payment
    processPayment(wallet, 300.0);                       // Process wallet payment

    return 0;                                            // End program successfully
}