#include <cstdlib>
#include <iostream>
#include <stdlib.h>
struct M {
  int a;
};
int main(int argc, char *argv[]) {
  // c
  struct M *mp = (M *)malloc(sizeof(struct M));
  // c++
  M *m2 = new M;
  m2->a = 12;
  std::cout << (*m2).a << std::endl;
  return 0;
}
