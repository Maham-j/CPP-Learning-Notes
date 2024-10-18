#include <iostream>
using namespace std;

int main() {
    // Variable declarations

    float score = 43.32f; // Float, typically 4 bytes
    double scoreD = 43.32; // Double, typically 8 bytes
    long double scoreLD = 43.32; // Long double, typically 8 or more bytes

    // Correcting the assignment syntax
    score = 43.22f; // Assigning a new float value
    cout << "The score is " << score << endl;

    return 0; // End the program and return 0
}
