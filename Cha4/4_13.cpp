#include <iostream>
#include <string>
int main() {
  int i;
  double d;
  d = i = 3.5;
  std::cout << i << " " << d << std::endl;

  i = d = 3.5;
  std::cout << i << " " << d << std::endl;
}