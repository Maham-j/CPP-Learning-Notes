#include <iostream>
#include <string>
using namespace std;

class Employee {
    public:
        string name;     // Employee's name
        int salary;      // Employee's salary
    	// int salary = 0;  a default value in case no value is set for salary

    // Function to print employee details
    void printDetails() {
        cout << "The name of employee is " << this->name << " and her salary is " << this->salary << " Dollars" << endl;
    }
};

int main() {
   // Create and initialize first employee
   Employee emp;
   emp.name = "Maham";
   emp.salary = 100;
   emp.printDetails();   // Prints Maham's details
   
   // Create and initialize second employee
   Employee emp2;
   emp2.name = "Jamil";
   emp2.salary = 150; // if no value is set ,will print garbage value
   emp2.printDetails();  // Prints Jamil's details

   return 0;
}
