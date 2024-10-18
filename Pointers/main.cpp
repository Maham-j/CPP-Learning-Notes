#include <iostream>
#include <string>
using namespace std;

int main() {
    int a = 32;          // Declare an integer variable 'a' and initialize it with 32
    int* pointer;        // Declare a pointer to an integer
    pointer = &a;        // Assign the address of 'a' to the pointer

    // Output the value of 'a' directly
    cout << "The value of a is: " << a << endl;
    
    // Output the value of 'a' using the pointer (dereferencing the pointer)
    cout << "The value of a is (using pointer): " << *pointer << endl;
    
    // Output the address of 'a' using the pointer
    cout << "The address of a is (using pointer): " << pointer << endl;
    
    // Output the address of 'a' directly using the address-of operator (&)
    cout << "The address of a is (using &a): " << &a << endl;

    return 0; // End the program and return 0
}
