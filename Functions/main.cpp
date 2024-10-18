#include <iostream>
using namespace std;

// Function that returns the sum of two integers
int sum(int a, int b) {
    return a + b;
}

// Function that prints a message (void function)
void printMessage() {
    cout << "This is a void function that doesn't return a value." << endl;
}

int main() {
    int a = 9;
    int b = 7;

    // Calling the sum function
    cout << "Sum: " << sum(a, b) << endl;

    // Calling the void function
    printMessage();

    return 0; // End the program and return 0
}
