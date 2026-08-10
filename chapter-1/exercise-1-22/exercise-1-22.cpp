/*Exercise 1.22: Write a program that reads several transactions for the same
 * ISBN. Write the sum of all the transactions that were read.*/

#include "Sales_item.h"
#include <iostream>
#include <ostream>

int main() {
  Sales_item item, total;

  std::cin >> total;

  while (std::cin >> item) {
    total += item;
  }

  std::cout << total << std::endl;

  return 0;
}
