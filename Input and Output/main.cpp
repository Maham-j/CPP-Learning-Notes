#include <iostream>
using namespace std;

int main() {
    // Declare variables to hold user input
    string name; 
    int age;

    // Prompt user for their name
    cout << "Enter your name: ";
    cin >> name; // Read user input

    // Prompt user for their age
    cout << "Enter your age: ";
    cin >> age; // Read user input

    // Output the received input
    cout << "Hello, " << name << "! You are " << age << " years old." << endl;

    return 0; // End the program and return 0
}
