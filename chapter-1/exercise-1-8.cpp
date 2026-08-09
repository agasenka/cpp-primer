/*Exercise 1.8: Indicate which, if any, of the following output statements are
legal: After you’ve predicted what will happen, test your answers by compiling a
program with each of these statements. Correct any errors you encounter.*/

#include <iostream>

int main() {
  std::cout << "/*"; // Correct, because it is on double quotes
  std::cout << "*/"; // Correct, same
  // std::cout << /* "*/" */; Error, because the comment /* starts before the
  // double quotes
  std::cout << /* "*/ " /* " /*" */; // Correct, the comments is not read by
                                     // compiler and only read double quotes
  return 0;
}
