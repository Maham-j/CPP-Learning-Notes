The **scope resolution operator** (`::`) in C++ is used to define and access members of a class, namespace, or global variables when there is a name conflict or to specify which scope you are referring to.

## Key Uses of the Scope Resolution Operator:

1. **Accessing Global Variables**:
   It helps in differentiating between local and global variables when both have the same name.

   ```cpp
   #include <iostream>
   using namespace std;

   int var = 100;  // Global variable

   int main() {
       int var = 50;  // Local variable
       cout << "Local var: " << var << endl;  // Prints local variable (50)
       cout << "Global var: " << ::var << endl;  // Prints global variable (100)
       return 0;
   }
   ```


