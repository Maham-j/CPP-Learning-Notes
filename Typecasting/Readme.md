
###  Type Casting in C++ 🚀

---

## 📋 What is Type Casting?

Type casting is the process of converting a variable from one data type to another. In C++, we can explicitly convert (cast) data types to suit specific needs.

---

## 🛠️ Types of Casting in C++

1. **Implicit Type Casting**: Automatically done by the compiler when there is no risk of data loss.
   - Example: `int` to `float` conversion.
   
2. **Explicit Type Casting**: Manually converting the data type using type casting syntax.
   - Example: Converting `float` to `int` or `int` to `char`.

---

## ✨ Examples Covered in the Code

1. **Casting from `int` to `float`:**
   - This converts an integer value to a floating-point value.
   - Example: `cout << (float)a;` where `a` is an `int`.
   
2. **Casting from `float` to `int`:**
   - Converts a float to an integer by truncating the decimal part.
   - Example: `cout << (int)b;` where `b` is a `float`.
   
3. **Casting from `char` to `int`:**
   - This shows the ASCII value of a character.
   - Example: `cout << (int)ch;` where `ch` is a `char`.

4. **Casting from `double` to `int`:**
   - Similar to casting `float` to `int`, but with `double` data types.
   - Example: `cout << (int)d;` where `d` is a `double`.

---

## ⚙️ Key Concepts

- **Type Casting Syntax**: `(data_type) variable`
  - Example: `(int)b` casts `b` to an `int`.
  
- **Precision Loss**: Converting from `float` or `double` to `int` truncates the decimal part, resulting in precision loss.

