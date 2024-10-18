#include <iostream>
using namespace std;

int main() {
    int number;

    // Prompt user for a number
    cout << "Enter a number: ";
    cin >> number; // Read user input

    // Check if the number is positive, negative, or zero
    if (number > 0) {
        cout << "The number is positive." << endl; // Positive case
    } else if (number < 0) {
        cout << "The number is negative." << endl; // Negative case
    } else {
        cout << "The number is zero." << endl; // Zero case
    }

    return 0; // End the program and return 0
}
