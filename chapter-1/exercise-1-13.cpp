/* exercise 1.13: Rewrite the first two exercises from § 1.4.1 (p. 13) using for
 * loops.*/

#include <iostream>

int main() {
  // exercise 1.9

  std::cout << "Exercise 1.9" << std::endl;
  int sum = 0;

  for (int i = 50; i <= 100; i++) {
    sum += i;
  }

  std::cout << sum << std::endl;

  // exercise 1.10

  std::cout << "Exercise 1.10" << std::endl;

  for (int i = 10; i >= 0; --i) {
    std::cout << i << std::endl;
  }

  return 0;
}
