/*Exercise 1.11: Write a program that prompts the user for two integers. Print
each number in the range specified by those two integers. */

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

// ps: sorry i use if else statement even though its not explained yet
