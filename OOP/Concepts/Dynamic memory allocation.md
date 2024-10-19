

### What Is Dynamic Memory Allocation? 💻

**Definition**:  
Dynamic memory allocation is a way of allocating memory at runtime, which means the memory is reserved while the program is running, rather than at compile time. This allows programs to use memory more flexibly.

**How It Works**:
- **Allocation**: You can request a specific amount of memory from the system using functions like `new` in C++ .
- **Access**: Once allocated, you can use this memory to store data, such as arrays or objects.
- **Deallocation**: After you're done using the memory, you should release it using `delete` in C++  avoid memory leaks.

**Advantages**:
- **Flexibility**: You can allocate exactly the amount of memory you need, which can change during program execution.
- **Efficient Use of Memory**: It helps in managing memory efficiently, especially for data structures like linked lists, trees, or when handling large amounts of data.

**Example**:
In C++:
```cpp
int* arr = new int[10];  // Allocates an array of 10 integers
// Use the array...
delete[] arr;  // Frees the allocated memory
```

