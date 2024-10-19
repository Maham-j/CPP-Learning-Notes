
# Global vs. Local Variables 🌍
- **Global Variable**: 
  - Defined outside any function (e.g., `int glo = 9;`). 
  - Accessible throughout the program.

- **Local Variable**: 
  - Defined within a function (e.g., `int glo = 78;` in `main()`).
  - Shadows the global variable with the same name.

#### Key Points ✔️
- **In main**
  - In `main()`, the local `glo` variable set to 78
  - The local `go` set to 2 in next line
  - in main if we print glo,it will print 2 because local variable has precedence over global variable

- **In function**
  - if we print the `glo` it will print the global variable 9
  - Because the fuction has no knowlege of the local glo variable

- The output will show the local value first (2) and then the global value (9).

---

