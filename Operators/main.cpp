#include <iostream>
using namespace std;

int main() {
    int a, b; // Declare two integer variables

    cout << "Enter first number: ";
    cin >> a; // Input first number

    cout << "Enter second number: ";
    cin >> b; // Input second number

    // Arithmetic Operators
    cout << "a + b = " << a + b << endl; // Addition
    cout << "a - b = " << a - b << endl; // Subtraction
    cout << "a * b = " << a * b << endl; // Multiplication
    cout << "a / b = " << a / b << endl; // Division
    cout << "a % b = " << a % b << endl; // Modulus

    // Relational Operators
    cout << "a == b: " << (a == b) << endl; // Equal to
    cout << "a != b: " << (a != b) << endl; // Not equal to
    cout << "a > b: " << (a > b) << endl; // Greater than
    cout << "a < b: " << (a < b) << endl; // Less than
    cout << "a >= b: " << (a >= b) << endl; // Greater than or equal to
    cout << "a <= b: " << (a <= b) << endl; // Less than or equal to

    // Logical Operators
    cout << "(a > 5) && (b > 5): " << ((a > 5) && (b > 5)) << endl; // Logical AND
    cout << "(a > 5) || (b > 5): " << ((a > 5) || (b > 5)) << endl; // Logical OR
    cout << "!(a > 5): " << (!(a > 5)) << endl; // Logical NOT

    // Assignment Operators
    a += 5; // Addition assignment
    cout << "a after += 5: " << a << endl;

    b -= 3; // Subtraction assignment
    cout << "b after -= 3: " << b << endl;

    // Increment and Decrement Operators
    cout << "a++: " << a++ << " (after increment a is " << a << ")" << endl; // Post-increment
    cout << "b--: " << b-- << " (after decrement b is " << b << ")" << endl; // Post-decrement

    // Ternary Operator
    cout << "Max of a and b: " << (a > b ? a : b) << endl; // Ternary operator example

    return 0; // End the program and return 0
}


