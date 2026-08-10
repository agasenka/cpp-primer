/*Exercise 1.19: Revise the program you wrote for the exercises in § 1.4.1 (p.
13) that printed a range of numbers so that it handles input in which the first
number is smaller than the second.*/

#include <iostream>

int main() {
  int a;
  int b;

  std::cout << "Input first number: ";
  std::cin >> a;
  std::cout << "Input second number: ";
  std::cin >> b;

  if (a <= b) {
    while (a <= b) {
      std::cout << a << std::endl;
      a++;
    }
  } else {
    while (a >= b) {
      std::cout << a << std::endl;
      a--;
    }
  }

  return 0;
}

// Same like exercise 1.11