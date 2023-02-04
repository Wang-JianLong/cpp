#include <iostream>

int main() {
  // delete是释放指针所指向那片内存 而不是指针本身
  int *i = new int;
  *i = 100;
  int *j = i;
  std::cout << *i << std::endl;
  delete j;
  std::cout << *i << std::endl;
  return 0;
}
