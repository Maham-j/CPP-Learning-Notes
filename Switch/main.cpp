#include <iostream>
using namespace std;

int main() {
    int age; // Declare an integer variable for age

    cout << "Enter your age: ";
    cin >> age; // Input age

    // Switch statement to determine output based on age
    switch (age) {
        case 12:
            cout << "You are 12 years old." << endl; // Output for age 12
            break; // Exit switch
        case 2:
            cout << "You are 2 years old." << endl; // Output for age 2
            break; // Exit switch
        default:
            cout << "Age not specifically handled." << endl; // Output for any other age
            break; // Exit switch
    }

    return 0; // End the program and return 0
}
