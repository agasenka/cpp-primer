/*Exercise 1.15: Write programs that contain the common errors discussed in the
box on page 16. Familiarize yourself with the messages the compiler generates.*/

#include <iostream>

int main() {
  int v1 = 0, v2 = 0                // Syntax errors
              int number = "Hello"; // Type errors

  // Declaration errors
  std::cin >> v >> v2;
  cout << v1 + v2 << std::endl;

  return 0;
}

// Compile and see the errors