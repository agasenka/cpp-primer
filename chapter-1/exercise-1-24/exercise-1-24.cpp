/*Exercise 1.24: Test the previous program by giving multiple transactions
 * representing multiple ISBNs. The records for each ISBN should be grouped
 * together.*/

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

// use this example:
// 0-201-78345-X 1 20.00
// 0-201-78345-X 2 20.00
// 0-201-78345-X 3 20.00
// 0-201-78346-8 1 30.00
// 0-201-78346-8 2 30.00
