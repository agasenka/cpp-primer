/*Exercise 1.18: Compile and run the program from this section giving it only
equal values as input. Run it again giving it values in which no number is
repeated*/

#include <iostream>
int main() {
  int currVal = 0, val = 0;
  if (std::cin >> currVal) {
    int cnt = 1;
    while (std::cin >> val) {
      if (val == currVal)
        ++cnt;
      else {
        std::cout << currVal << " occurs " << cnt << " times" << std::endl;
        currVal = val;
        cnt = 1;
      }
    }
    std::cout << currVal << " occurs " << cnt << " times" << std::endl;
  }
  return 0;
}

// Different number
// 1 2 3 4 5 6
// 1 occurs 1 times
// 2 occurs 1 times
// 3 occurs 1 times
// 4 occurs 1 times
// 5 occurs 1 times
// 6 occurs 1 times

// Same number
// 9 9 9 9 9 9
// 9 occurs 6 times