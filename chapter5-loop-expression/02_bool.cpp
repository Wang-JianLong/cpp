#include <ios>
#include <iostream>

int main(int argc, char *argv[]) {
  int x = 100;
  int y = 1;
  std::cout << (x > y) << std::endl;
  std::cout << (x < y) << std::endl;
  std::cout.setf(std::ios_base::boolalpha);
  std::cout << (x > y) << std::endl;
  std::cout << (x < y) << std::endl;
  std::cout << 1 + (x > y) << std::endl;
  return 0;
}
