# Object-Oriented Programming (C++) — Unit III Assignment

**Student Name:** Anushka Ramchandra Bobade  
**PRN:** I125UAD1113  
**Class / Division:** S.Y B.Tech (AIDS) / Division - A  
**Course Name:** Object Oriented Programming in C++  
**Course Code:** ADPC303[cite: 1]  
**Unit Scope:** Unit III – Polymorphism[cite: 1]  

---

## 📌 CIE Activity
**Git Submission of C++ Programming Project/Coding — Unit III**[cite: 1]

---

## 📋 Submission Requirements
Each student must:
* Create a repository specifically for the Unit III C++ programming activity.
* Upload Unit III programs to the repository[cite: 1].
* Ensure that each program is properly named and organized.
* Include the output for every program.
* Include appropriate comments in the code wherever required.
* Create a `README.md` file containing student details, unit scope, and a directory list.
* Submit the repository link through the designated submission form.

---

## 📁 Repository Structure & Program Directory

| Folder Name | Source File | Topic / Problem Statement | Brief Description |
| :--- | :--- | :--- | :--- |
| `Program_01/` | `program01.cpp` | 1. Function Overloading | Demonstrates compile-time polymorphism using functions with identical names but different parameter lists[cite: 1]. |
| `Program_02/` | `program02.cpp` | 2. Area Calculator | Implements function overloading to compute areas for squares, rectangles, and circles[cite: 1]. |
| `Program_03/` | `program03.cpp` | 3. Unary Minus Operator | Overloads the unary `-` operator to negate data member values within a user-defined class[cite: 1]. |
| `Program_04/` | `program04.cpp` | 4. Prefix and Postfix Increment | Overloads prefix (`++obj`) and postfix (`obj++`) operators using dummy `int` parameters for postfix distinction[cite: 1]. |
| `Program_05/` | `program05.cpp` | 5. Complex Number Addition | Overloads the binary `+` operator to perform addition on complex number objects[cite: 1]. |
| `Program_06/` | `program06.cpp` | 6. Distance Comparison | Overloads relational operator `>` to evaluate and compare values across class instances[cite: 1]. |
| `Program_07/` | `program07.cpp` | 7. Non-Member Friend Operator | Overloads `+` operator using a non-member friend function to allow primitive types as left operands[cite: 1]. |
| `Program_08/` | `program08.cpp` | 8. Base Pointer without Virtual Function | Demonstrates static binding where a base class pointer invokes the base class method[cite: 1]. |
| `Program_09/` | `program09.cpp` | 9. Base Pointer with Virtual Function | Demonstrates run-time polymorphism by dispatching derived class methods through base pointers[cite: 1]. |
| `Program_10/` | `program10.cpp` | 10. Base Reference with Virtual Function | Achieves dynamic binding via base class references without copying underlying objects[cite: 1]. |
| `Program_11/` | `program11.cpp` | 11. Abstract Class | Declares pure virtual functions (`= 0`) to enforce interface implementation in derived classes[cite: 1]. |
| `Program_12/` | `program12.cpp` | 12. Polymorphic Shape Pointers | Utilizes smart pointers (`std::unique_ptr`) and vectors for dynamic polymorphic processing[cite: 1]. |
| `Program_13/` | `program13.cpp` | 13. Virtual Destructor | Ensures complete memory cleanup and proper destruction order when deleting derived objects via base pointers[cite: 1]. |
| `Program_14/` | `program14.cpp` | 14. Object Slicing | Demonstrates object slicing during pass-by-value versus retaining dynamic types by reference[cite: 1]. |
| `Program_15/` | `program15.cpp` | 15. Mini-Project: Payment Processing | Models payment gateways (Card, UPI, Net Banking) utilizing abstract interfaces and dynamic binding[cite: 1]. |
| `Program_16/` | `program16.cpp` | 16. Mini-Project: Employee Payroll | Implements salary computation using an abstract base class and dynamic binding[cite: 1]. |

---

## 🛠️ How to Compile and Run

To compile and run any program individually using GCC in a terminal[cite: 1]:

```bash
# Example for Program 1
g++ -std=c++17 Program_01/program01.cpp -o Program_01/program01
./Program_01/program01