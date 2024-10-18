
#include <iostream>
#include <string>
using namespace std;

int main() {
    // String example
    string studentName = "Maham Jamil"; // Declare and initialize a string
    cout << "Student Name: " << studentName << endl; // Output the string
    cout << "Length of Student Name is: " << studentName.length() << endl; // Output the string length
    cout << "Substring of Student Name: " << studentName.substr(0,3) << endl; // Output the substring (starting from index 0  and 3 characters)
    cout << "Substring of Student Name: " << studentName.substr(2,34) << endl; // Output the substring (starting from index 2 and at the end)
 
    return 0; // End the program and return 0
}

