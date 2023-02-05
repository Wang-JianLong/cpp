#include <iostream>

typedef int *wjl;

int main(int argc, char *argv[]) {
  int a = 100;
  wjl w = &a;
  std::cout << w << std::endl;
  std::cout << *w << std::endl;
  return 0;
}
