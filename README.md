# Object Oriented Programming in C++
## Unit II Assignment — Inheritance & Class Hierarchies

---

### 👤 Student & Course Details
* **Student Name:** Anushka Ramchandra Bobade
* **PRN:** 125UAD1113
* **Class / Division:** S.Y B.Tech (AIDS) / Division - A
* **Course Name:** Object Oriented Programming in C++
* **Unit Scope:** Unit I – IV

---

## 📌 Activity Overview
This repository contains the complete practical implementation for the **Unit II Assignment** focusing on Inheritance, Access Control, Constructor/Destructor Execution Cycles, Virtual Base Classes, Abstract Classes, and Object-Oriented Mini-Projects.

---

## 📁 Repository Structure & Program Directory

| Folder Name | Source File | Topic / Problem Statement | Brief Description |
| :--- | :--- | :--- | :--- |
| `Program_01/` | `program01.cpp` | 1. Basic Single Inheritance | Demonstrates single inheritance using Base and Derived classes to inherit properties. |
| `Program_02/` | `program02.cpp` | 2. Protected Member Access | Illustrates how the protected access specifier allows member access in derived classes. |
| `Program_03/` | `program03.cpp` | 3. Public vs. Private Inheritance | Compares public and private inheritance modes and member accessibility. |
| `Program_04/` | `program04.cpp` | 4. Multilevel Inheritance | Implements a three-level class hierarchy (Grandparent → Parent → Child). |
| `Program_05/` | `program05.cpp` | 5. Hierarchical Inheritance | Models a hierarchy where one single base class branches into multiple derived classes. |
| `Program_06/` | `program06.cpp` | 6. Multiple Inheritance | Constructs a single derived class inheriting features from two independent base classes. |
| `Program_07/` | `program07.cpp` | 7. Multiple-Inheritance Ambiguity | Resolves naming conflict ambiguities using the scope resolution operator (`::`). |
| `Program_08/` | `program08.cpp` | 8. Constructor & Destructor Order | Traces object lifecycle and execution order of constructors and destructors in derived classes. |
| `Program_09/` | `program09.cpp` | 9. Parameterized Base Constructor | Passes arguments from derived constructors to base constructors using member initializer lists. |
| `Program_10/` | `program10.cpp` | 10. Function Overriding | Redefines base class methods in derived classes using `virtual` and `override` keywords. |
| `Program_11/` | `program11.cpp` | 11. Abstract Class | Enforces interface contracts using pure virtual functions (`virtual void func() = 0;`). |
| `Program_12/` | `program12.cpp` | 12. Virtual Base Class | Prevents duplicated base instances in diamond inheritance using virtual inheritance. |
| `Program_13/` | `program13.cpp` | 13. Friend Class | Grants special access permissions to private and protected members using `friend class`. |
| `Program_14/` | `program14.cpp` | 14. Nested Class | Declares and uses a class contained entirely inside the scope of another host class. |
| `Program_15/` | `program15.cpp` | 15. Mini-Project: Vehicle Rental | Integrates inheritance hierarchies to manage multi-type vehicle rental pricing calculations. |
| `Program_16/` | `program16.cpp` | 16. Mini-Project: Employee Payroll | Implements employee salary computation using an abstract base class and runtime polymorphism. |

---

## 🛠️ How to Compile and Run

To compile and execute any program individually using GCC/G++ in a terminal:

:: Example: Compiling Program 01
g++ -std=c++17 Program_01\program01.cpp -o Program_01\program01.exe
Program_01\program01.exe

:: Example: Compiling Program 16 (Mini-Project)
g++ -std=c++17 Program_16\program16.cpp -o Program_16\program16.exe
Program_16\program16.exe

### 🐧 On Linux / macOS / Git Bash
```bash
# Example: Compiling Program 01
g++ -std=c++17 Program_01/program01.cpp -o Program_01/program01
./Program_01/program01

# Example: Compiling Program 16 (Mini-Project)
g++ -std=c++17 Program_16/program16.cpp -o Program_16/program16
./Program_16/program16