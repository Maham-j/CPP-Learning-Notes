
### What Are Memory Leaks? 💧

**Definition**:  
A memory leak occurs when a program allocates memory (usually using dynamic memory allocation) but fails to release it after it's no longer needed. This means the memory is still reserved and cannot be used by other parts of the program or other programs.

**How It Happens**:
- When you create an object or allocate memory but forget to delete it or free it when you're done.
- If the program loses the reference to that memory (e.g., by overwriting the pointer without freeing it first).

**Why It's a Problem**:
- **Wasted Memory**: Over time, memory leaks can consume a large amount of memory, leading to less memory available for other tasks.
- **Slow Performance**: The program may slow down as it uses more memory.
- **Crashes**: In severe cases, the program can crash or run out of memory, leading to errors.

### Example:
If you create an object with `new` in C++ but never use `delete` to free it, that memory stays allocated even after you finish using it.

