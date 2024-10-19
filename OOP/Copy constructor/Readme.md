
#  Description
This C++ program demonstrates the use of:
- **Default constructor**
- **Parameterized constructor**
- **Copy constructor**
- **Assignment operation**

#### Constructors Used:
1. **Default Constructor**: Initializes the data member `a` to 0.
2. **Parameterized Constructor**: Initializes the data member `a` with the provided value.
3. **Copy Constructor**: Creates a new object by copying the value of `a` from an existing object.

#### Key Parts of the Program:
- **Object Creation**: Different constructors are called when creating objects (`x`, `y`, `z`, `z1`, `z3`).
- **Assignment**: The object `z2` is assigned the values of `z` using the default assignment operator, not the copy constructor.

#### Output:
- Each object displays the value of `a` using the `display()` function.

---

# When copy constructer is called?

1. **Copy Constructor** is called when a new object is created using an existing object to initialize it.
   - For example: `num z3 = z;` or `num z1(z);`.
   
2. **Assignment Operator (`=`)** is called when an already existing object is assigned the values from another existing object. In the case of `z2 = z;`, since `z2` is already created, it does **not** invoke the copy constructor but uses the **default assignment operator** to copy the data members.

---

### Why is `z2.display()` showing the value?

Even though the copy constructor is not called, C++ provides a **default assignment operator** if you don't define one. This operator performs a **shallow copy** (it copies the values of all the data members from one object to another).

- In this case, the value of `z.a` is copied to `z2.a` during the `z2 = z` assignment.
- This is why `z2.display()` shows the same value as `z.display()`.

