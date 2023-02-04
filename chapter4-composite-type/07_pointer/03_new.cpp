#include <iostream>

int main() {

  int i = 100;
  int *ip = &i;
  int *np = new int;
  *np = 100;
  std::cout << "i=" << i << "   address=" << ip << std::endl;
  std::cout << "np=" << *np << "   address=" << np << std::endl; 
  return 0;
}
