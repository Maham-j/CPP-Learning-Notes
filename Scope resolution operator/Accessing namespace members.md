

3. **Accessing Namespace Members**:
   It is used to access members of a namespace when there are multiple namespaces or ambiguity.

   ```cpp
   #include <iostream>

   namespace ns1 {
       int var = 10;
   }

   namespace ns2 {
       int var = 20;
   }

   int main() {
       std::cout << "ns1 var: " << ns1::var << std::endl;  // Access var from ns1
       std::cout << "ns2 var: " << ns2::var << std::endl;  // Access var from ns2
       return 0;
   }
   ```

