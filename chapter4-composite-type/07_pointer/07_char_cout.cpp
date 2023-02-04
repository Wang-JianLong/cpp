#include <iostream>

int main(int argc, char *argv[]) {
  char *wjl = "123";
  std::cout << (int *)wjl << std::endl;
  std::cout << *wjl << std::endl; // 1
  std::cout << (int *)"****" << std::endl;
  return 0;
}
