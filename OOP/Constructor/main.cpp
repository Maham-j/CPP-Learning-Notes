#include <iostream>
#include <string>
using namespace std;

class Employee {
    public:
        string name;         // Employee's name
        int salary;          // Employee's salary
        
        // Constructor to initialize name, salary, and secretCode
        Employee(string n, int s, int sc) {
            this->name = n;            // Set name
            this->salary = s;          // Set salary
            this->secretCode = sc;     // Set secret code
        }
        
        // Function to print employee details
        void printDetails() {
            cout << "The name of employee is " << this->name 
                 << " and her salary is " << this->salary 
                 << " Dollars and the secret code is " << this->secretCode << endl;
        }
        
        // Function to call the private members
        void getSecretCode() {
            cout << "The secret code is " << this->secretCode; // Access and print secret code
        }
        
    private:
        int secretCode;    // Private member for secret code
};

int main() {
    Employee emp1("Maham", 234, 777); // Create an Employee object
    emp1.printDetails();               // Print details of emp1
    
    // Uncommenting the following line would cause an error:
    // emp1("Jamil", 123, 333);          // Cannot call constructor again
    
    // Update name and salary directly
    emp1.name = "Jamil";               // Change name
    emp1.salary = 123;                 // Change salary
    // emp1.secretCode = 333;           // Error: secretCode is private

    cout << emp1.name << endl;         // Print updated name
    cout << emp1.salary << endl;       // Print updated salary
    emp1.getSecretCode();              // Print secret code

    return 0; 
}
