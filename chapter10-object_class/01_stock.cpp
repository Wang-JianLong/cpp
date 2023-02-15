#include "01_stock00.h"
#include <iostream>

int main() {
  Stock s;
  s.setName("zhangsnan");
  std::string str = s.getName();
  std::cout << str << std::endl;
  return 0;
}

std::string Stock::getName() { return "afd" + name; }
void Stock::setName(std::string fname) { name = fname; }
