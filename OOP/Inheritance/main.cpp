#include <iostream>
#include <string>
using namespace std;

class Employee {
    public:
        string name;         // Employee's name
        int salary;          // Employee's salary
        int secretCode;      // Employee's secret code
        
        // Constructor to initialize name, salary, and secretCode
        Employee(string n, int s, int sc) {
            this->name = n;            // Set name
            this->salary = s;          // Set salary
            this->secretCode = sc;     // Set secret code
        }
        
        // Function to print employee details
        void printDetails() {
            cout << "The name of employee is " << this->name 
                 << ", salary is " << this->salary 
                 << " Dollars, and the secret code is " << this->secretCode << endl;
        }
};

// Programmer class inherits from Employee
class Programmer : public Employee {
    public:
        int errors;   // Number of errors in the programmer's code

        // Constructor for Programmer
        Programmer(string n, int s, int sc, int e) : Employee(n, s, sc), errors(e) {
            // Call the base class constructor and set the number of errors
        }
};

int main() {
    Employee emp1("Maham", 234, 777); // Create an Employee object
    emp1.printDetails();               // Print details of emp1
    
    // Create a Programmer object with name, salary, secret code, and number of errors
    Programmer pg("Jamil", 300, 888, 5); // Initialize Programmer
    pg.printDetails();                   // Print details of pg (name, salary, secret code)
    cout << "Number of errors: " << pg.errors << endl; // Print number of errors
    
    return 0; 
}
