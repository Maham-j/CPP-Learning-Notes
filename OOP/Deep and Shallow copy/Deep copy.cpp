#include <iostream>
using namespace std;

class Deep {
    public:
        int *data;  // Pointer to hold dynamic memory
    
        // Constructor
        Deep(int value) {
            data = new int;  // Allocating memory
            *data = value;
        }
        
        // Deep Copy Constructor
        Deep(const Deep &obj) {
            data = new int;  // Allocate new memory
            *data = *obj.data;  // Copy the actual data
            cout << "Deep Copy Constructor Called" << endl;
        }
        
        // Destructor
        ~Deep() {
            delete data;  // Deallocate memory to prevent memory leak
            cout << "Destructor freeing data of loaction " << data << endl;
        }
        
        void display() {
            cout << "Value: " << *data << endl;
        }
};

int main() {
    Deep obj1(100);
    obj1.display();

    Deep obj2 = obj1;  // Deep copy
    obj2.display();
    
    // Both obj1 and obj2 have their own separate memory,
    // so deleting one does not affect the other.
    
    return 0;
}
