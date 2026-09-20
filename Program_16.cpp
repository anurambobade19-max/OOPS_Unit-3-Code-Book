#include <iostream>                                      // Include input/output library
#include <string>                                        // Include string library
#include <utility>                                       // Include utility for std::move
#include <vector>                                        // Include vector library
#include <memory>                                        // Include smart pointer library

class Employee {                                         // Define abstract Employee class
protected:                                               // Protected access section
    int employeeId;                                      // Store employee ID
    std::string name;                                    // Store employee name

public:                                                  // Public access section

    Employee(int id, std::string employeeName)           // Employee constructor
        : employeeId(id), name(std::move(employeeName)) {} // Initialize ID and name

    virtual double calculateSalary() const = 0;          // Declare pure virtual salary function

    void displayBasicDetails() const {                   // Function to display employee details
        std::cout << "Employee ID: " << employeeId << '\n'; // Display employee ID
        std::cout << "Name: " << name << '\n';           // Display employee name
    }

    virtual ~Employee() = default;                       // Declare virtual destructor
};                                                       // End of Employee class


class PermanentEmployee : public Employee {              // Define PermanentEmployee class
private:                                                 // Private access section
    double basicSalary;                                  // Store basic salary
    double allowance;                                    // Store allowance
    double taxRate;                                      // Store tax rate

public:                                                  // Public access section

    PermanentEmployee(int id, std::string employeeName,  // Constructor parameters
                      double basic, double extra,        // Receive salary and allowance
                      double tax = 10.0)                 // Set default tax rate to 10 percent
        : Employee(id, std::move(employeeName)),         // Initialize base class
          basicSalary(basic),                            // Initialize basic salary
          allowance(extra),                              // Initialize allowance
          taxRate(tax) {}                                // Initialize tax rate

    double calculateSalary() const override {             // Override salary calculation
        return basicSalary + allowance;                  // Calculate gross salary
    }

    double calculateTax() const {                         // Calculate tax amount
        return calculateSalary() * taxRate / 100.0;       // Calculate tax using percentage
    }

    double calculateNetSalary() const {                   // Calculate salary after tax
        return calculateSalary() - calculateTax();        // Subtract tax from gross salary
    }
};                                                       // End of PermanentEmployee class


class ContractEmployee : public Employee {               // Define ContractEmployee class
private:                                                 // Private access section
    double hourlyRate;                                   // Store hourly payment rate
    int hoursWorked;                                    // Store number of hours worked

public:                                                  // Public access section

    ContractEmployee(int id, std::string employeeName,   // Contract employee constructor
                      double rate, int hours)              // Receive rate and hours
        : Employee(id, std::move(employeeName)),         // Initialize base class
          hourlyRate(rate),                              // Initialize hourly rate
          hoursWorked(hours) {}                           // Initialize hours worked

    double calculateSalary() const override {             // Override salary calculation
        return hourlyRate * hoursWorked;                 // Calculate contract salary
    }
};                                                       // End of ContractEmployee class


class FreelanceEmployee : public Employee {              // Define FreelanceEmployee class
private:                                                 // Private access section
    double projectRate;                                  // Store project payment
    int projectsCompleted;                               // Store completed projects

public:                                                  // Public access section

    FreelanceEmployee(int id, std::string employeeName,  // Freelance constructor
                      double rate, int projects)          // Receive project rate and count
        : Employee(id, std::move(employeeName)),         // Initialize base class
          projectRate(rate),                             // Initialize project rate
          projectsCompleted(projects) {}                  // Initialize project count

    double calculateSalary() const override {             // Override salary calculation
        return projectRate * projectsCompleted;          // Calculate freelance salary
    }
};                                                       // End of FreelanceEmployee class


void printPaySlip(const Employee& employee) {             // Function accepts Employee reference
    std::cout << "----------------------------------------\n"; // Print divider header
    employee.displayBasicDetails();                       // Display basic employee details
    std::cout << "Salary: Rs. "                          // Display salary label
              << employee.calculateSalary() << '\n';     // Display calculated salary
    std::cout << "----------------------------------------\n\n"; // Print divider footer
}


int main() {                                             // Main function begins

    std::vector<std::unique_ptr<Employee>> employees;    // Create vector of Employee smart pointers

    employees.push_back(                                  // Add permanent employee
        std::make_unique<PermanentEmployee>(             // Create PermanentEmployee object
            101, "Asha", 40000.0, 8000.0));              // ID, name, salary and allowance

    employees.push_back(                                  // Add contract employee
        std::make_unique<ContractEmployee>(              // Create ContractEmployee object
            102, "Vikas", 500.0, 80));                   // ID, name, rate and hours

    employees.push_back(                                  // Add freelance employee
        std::make_unique<FreelanceEmployee>(             // Create FreelanceEmployee object
            103, "Riya", 10000.0, 3));                   // ID, name, rate and projects

    double totalPayroll = 0.0;                            // Initialize total payroll

    std::cout << "========================================\n"; // Header for payroll output
    std::cout << "           EMPLOYEE PAY SLIPS           \n"; // Header title
    std::cout << "========================================\n\n"; // Header divider

    for (const auto& employee : employees) {              // Loop through all employees

        printPaySlip(*employee);                          // Display employee pay slip

        totalPayroll += employee->calculateSalary();     // Add salary to total payroll
    }

    PermanentEmployee permanent(101, "Asha",              // Create temporary employee for tax example
                               40000.0, 8000.0);          // Set salary and allowance

    std::cout << "========================================\n"; // Divider before summary
    std::cout << "            TAX & SUMMARY DETAILS       \n"; // Summary section header
    std::cout << "========================================\n"; // Divider line
    std::cout << "Permanent Employee Tax: Rs. "           // Display tax label
              << permanent.calculateTax() << '\n';       // Display calculated tax

    std::cout << "Permanent Employee Net Salary: Rs. "   // Display net salary label
              << permanent.calculateNetSalary() << '\n'; // Display salary after tax

    std::cout << "Total Payroll: Rs. "                    // Display total payroll label
              << totalPayroll << '\n';                   // Display total payroll amount
    std::cout << "========================================\n"; // Closing divider

    return 0;                                            // End program successfully
}