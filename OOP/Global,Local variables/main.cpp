#include <iostream>
using namespace std;

int glo = 9; // Global variable 'glo' initialized to 9

// Function to print the global variable 'glo'
void print() {
    int a; // Local variable 'a' (not used)
    cout << glo << endl; // Print the global 'glo'
}

int main() {
    int glo = 78; // Local variable 'glo' shadowing the global 'glo'
    glo = 2; // Set local 'glo' to 2
    cout << glo << endl; // Print local 'glo'
    
    print(); // Call print function to print the global 'glo'
    
    return 0; 
}
