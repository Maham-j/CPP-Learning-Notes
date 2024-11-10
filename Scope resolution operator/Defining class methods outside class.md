

2. **Defining Class Methods Outside the Class**:
   The scope resolution operator is used to define a class method outside the class declaration.

   ```cpp
   #include <iostream>
   using namespace std;

   class MyClass {
       public:
           void show();
   };

   // Defining the show method outside the class using ::
   void MyClass::show() {
       cout << "Hello from MyClass!" << endl;
   }

   int main() {
       MyClass obj;
       obj.show();  // Calls the show method
       return 0;
   }
   ```

