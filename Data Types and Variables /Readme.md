

# Understanding Data Types in C++

## 🚀 Overview
This C++ program demonstrates various data types, their sizes, and how to declare and use them.

## 📄 Code Breakdown

###  **Variable Declarations**
- Begin with alphabet or underscore(_)
- After initial letter,can also contains numbers
- Are case sestive
- No spaces or special characters are allowed
- Keywords can't be used
---
# Data types
### 1. **Integer Type**
- **Short (`short`)**: 
  - **Size**: Typically 2 bytes.
  - **Usage**: Stores small integers. 
  - Example: `short _sa = 9;`
  
- **Integer (`int`)**: 
  - **Size**: Typically 4 bytes.
  - **Usage**: Standard data type for whole numbers.
  - Example: `int marksInMaths = 89;`

- **Long (`long`)**: 
  - **Size**: Typically 4 or 8 bytes (depends on the system).
  - **Usage**: Stores larger integers than `int`.
  - Example: `long c;`

- **Long Long (`long long`)**: 
  - **Size**: Typically 8 bytes.
  - **Usage**: Used for even larger integers.
  - Example: `long long d;`

### 2. **Floating Point Types**
- **Float (`float`)**: 
  - **Size**: Typically 4 bytes.
  - **Usage**: Stores single-precision floating-point numbers.
  - Example: `float score = 43.32f;`

- **Double (`double`)**: 
  - **Size**: Typically 8 bytes.
  - **Usage**: Stores double-precision floating-point numbers for higher precision.
  - Example: `double scoreD = 43.32;`

- **Long Double (`long double`)**: 
  - **Size**: Typically 8 or more bytes (depends on the system).
  - **Usage**: Provides extended precision for floating-point numbers.
  - Example: `long double scoreLD = 43.32;`

### 3. **Strings**
  - **String (string)**:
  - **Size**: Dynamic size (depends on the content).
  - **Usage**: Used to store sequences of characters (text).
### 4. **Constants**
- **Const**: Used to declare a variable whose value cannot be modified after its initialization.
  - Example: `const float scoreConst = 43.32f;` 

### 📝 Notes
- Each data type has a specific range and size. Choosing the appropriate data type is crucial for efficient memory usage and performance.
- The `f` suffix in floating-point literals (`43.32f`) indicates that the number is a `float` rather than a `double`.

Happy coding! 💻
