/*Exercise 1.16: Write your own version of a program that prints the sum of a
set of integers read from cin*/

#include <iostream>

int main() {
  int sum = 0, value = 0;

  std::cout << "Input set of integers: ";
  while (std::cin >> value) {
    sum += value;
  }

  std::cout << "Sum of all integers: " << sum << std::endl;
  return 0;
}