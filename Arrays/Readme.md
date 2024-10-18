###  Working with  Arrays in C++ 🚀

---

## 🛠️ Declaring a 2D Array

- A **2D array** in C++ is declared by specifying the number of rows and columns.
- Example: `int arr[2][3];` declares a 2D array with 2 rows and 3 columns.
  - **Rows**: Number of rows, which defines how many sets of elements the array will have.
  - **Columns**: Number of elements in each row.

---

## 📝 Inputting Values into a 2D Array

- To input values into a 2D array, use **nested loops** to access each element.
- **Outer loop**: Iterates over the rows (e.g., `i` for rows).
- **Inner loop**: Iterates over the columns (e.g., `j` for columns).
- Use `cin >> arr[i][j];` to input the values at each row and column index.

---

## 🔄 Printing the 2D Array

- To print the 2D array, again use **nested loops**.
- **Outer loop**: Iterates over the rows.
- **Inner loop**: Iterates over the columns.
- Use `cout << arr[i][j] << " ";` to display each element, followed by `cout << endl;` to move to the next line after printing each row.

---

## ⚙️ Variables Used

- `int i, j;`  
  - **`i`**: Row index for the 2D array.
  - **`j`**: Column index for the 2D array.
  - Both are declared as `int` because they are used to traverse through integer array indices.

---
