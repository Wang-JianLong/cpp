#include <iostream>

int main() {
  bool b = true;
  std::cout << b << std::endl;
  std::cout << (int)b << std::endl;
  std::cout << (bool)0 << std::endl;
  std::cout << (bool)1 << std::endl;
  // 1 1 0 1
  return 0;
}
