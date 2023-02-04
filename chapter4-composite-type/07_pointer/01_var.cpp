#include <iostream>

int main()
{
  long l = 10L;
  int i = 10;
  long *lp = &l;
  int *ip = &i;
  std::cout << "i = " << i << "  addr = " << ip << std::endl;
  std::cout << "l = " << l << "  addr = " << lp << std::endl;
  return 0;
}
