#include <iostream>
using namespace std;

class Shallow {
    public:
        int *data;  // Pointer to hold dynamic memory
    
        // Constructor
        Shallow(int value) {
            data = new int;  // Allocating memory
            *data = value;
        }
        
        // Shallow Copy Constructor
        Shallow(const Shallow &obj) {
            data = obj.data;  // Copies the pointer (address) only, not the actual data
            cout << "Shallow Copy Constructor Called" << endl;
        }
        
        // Destructor
        ~Shallow() {
            delete data;  // Deallocate memory to prevent memory leak
            cout << "Destructor freeing data" << endl;
        }
        
        void display() {
            cout << "Value: " << *data << endl;
        }
};

int main() {
    Shallow obj1(100);
    obj1.display();

    Shallow obj2 = obj1;  // Shallow copy
    obj2.display();
    
    // Both obj1 and obj2 point to the same memory location (shallow copy),
    // so when one object's memory is freed, the other object is left with a dangling pointer.
    
    return 0;
}
