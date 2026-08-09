/* Exercise 1.6: Explain whether the following program fragment is legal.
std::cout << "The sum of " << v1;
<< " and " << v2;
<< " is " << v1 + v2 << std::endl;
If the program is legal, what does it do? If the program is not legal, why not?
How would you fix it?
*/

#include <iostream>

int main() {
  int v1 = 1;
  int v2 = 4;
  std::cout << "The sum of " << v1 << " and " << v2 << " is " << v1 + v2
            << std::endl;
  return 0;
}

/* No, it is illegal because semicolon it end of statement. It means the code
 * must be like that or make a new object output in every line like this:
 * std::cout << "The sum of " << v1;
 * std::cout << " and " << v2;
 * std::cout << " is " << v1 + v2 << std::endl;
 */
