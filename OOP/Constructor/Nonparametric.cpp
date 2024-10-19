#include <iostream>
using namespace std;

class Employee {
public:
    string name;
    int salary;

    // Non-parametric constructor
    Employee() {
        name = "Unknown"; // Default value
        salary = 0;       // Default value
    }
};

int main() {
    // Calling the non-parametric constructor
    Employee emp2; // Object 'emp2' created with default values
    cout << "Name: " << emp2.name << ", Salary: " << emp2.salary << endl;
    
    return 0;
}
