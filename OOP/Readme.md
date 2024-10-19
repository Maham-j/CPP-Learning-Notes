
# Class and pointers 🚀
This is a simple C++ program that demonstrates how to define a class called `Employee` with two attributes: `name` and `salary`. The program creates two employee objects and prints their details using a class method.

## Features ✨  

- The `Employee` class contains:
  - `name`: the employee's name.
  - `salary`: the employee's salary.
- The `printDetails()` function outputs the employee's information.

These lines are mostly correct, but I’ll make some minor adjustments for clarity and correctness:

## This pointer 🛠️  

- The `this` pointer is automatically passed to every non-static member function of a class. It points to the object for which the member function is being called.
- It is used when member variables and parameters have the same name, helping to distinguish between them. It automatically refers to the current object’s data members.
- If you don’t set a value for a data member, it will contain a garbage value (random value in memory).
  - To avoid garbage values, you can set default values for data members (commented in the code).
