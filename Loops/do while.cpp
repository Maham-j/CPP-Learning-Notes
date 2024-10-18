#include <iostream>
using namespace std;

int main() {
    int count = 1; // Initialize count

    cout << "Do-While Loop: Counting from 1 to 5" << endl;
    do {
        cout << count << endl; // Output current count
        count++; // Increment count
    } while (count <= 5); // Loop condition

    return 0; // End the program and return 0
}
