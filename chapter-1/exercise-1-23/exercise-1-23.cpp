/*Exercise 1.23: Write a program that reads several transactions and counts how
many transactions occur for each ISBN.*/

#include "Sales_item.h"
#include <iostream>

int main() {
  Sales_item item, currItem;

  if (std::cin >> currItem) {
    int count = 1;

    while (std::cin >> item) {
      if (item.isbn() == currItem.isbn()) {
        count++;
      } else {
        std::cout << currItem.isbn() << " occurs " << count << " transaction "
                  << std::endl;
        currItem = item;
        count = 1;
      }
    }
    std::cout << currItem.isbn() << " occurs " << count << " transaction "
              << std::endl;
  }
  return 0;
}
