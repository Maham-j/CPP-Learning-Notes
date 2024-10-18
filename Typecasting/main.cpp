#include <iostream>
using namespace std;

int main() {
    int a = 32;         // Declare an integer variable 'a'
    float b = 43.32;    // Declare a float variable 'b'

    cout << "Integer a: " << a << endl;           // Output the value of 'a'
    cout << "Float b: " << b << endl;             // Output the value of 'b'

    // Type casting from int to float
    cout << "Integer a as float: " << (float)a << endl;

    // Type casting from float to int (truncates decimal part)
    cout << "Float b as integer: " << (int)b << endl;

    // Type casting with char
    char ch = 'A';      // Declare a character variable
    cout << "Character ch: " << ch << endl;
    cout << "Character ch as int (ASCII): " << (int)ch << endl; // ASCII value of 'A'

    // Type casting from double to int
    double d = 99.99;   // Declare a double variable
    cout << "Double d: " << d << endl;
    cout << "Double d as integer: " << (int)d << endl;  // Type cast double to int (truncates decimal)

    return 0;
}
