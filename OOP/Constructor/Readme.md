
# Constructor 📋

- In C++, constructors are special functions that are only called once when an object is created. They are responsible for initializing the object's state (its data members).
-  After the object has been constructed, you cannot manually call the constructor again, because constructors are not regular member functions.

 ```cpp
   emp1.Employee("Jamil", 2000);  // INVALID, trying to call constructor again
 ```
- if you call this it will cause an error.
- If you want to modify the object’s data after creation, do so by directly assigning new values to the data members:
```cpp
   emp1.name = "Jamil";   // Correct way to modify the name after creation
emp1.salary = 2000;    // Modify the salary
emp1.printDetails();   // Prints updated details
```

## Calling private member
- private members are accesed only inside class or subclass(inheritance)
- However,to access outside the class you have to create getter functions

```cpp
  // Function to get the secret code
        void getSecretCode() {
            cout << "The secret code is " << this->secretCode; // Access and print secret code
        }

emp1.getSecretCode();              // Print secret code
```






