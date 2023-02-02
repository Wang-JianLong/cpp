#include <iostream>
enum Color { red = 10, green, blue };
int main() {
  std::cout << red << std::endl;
  std::cout << green << std::endl;
  std::cout << blue << std::endl;
  enum Day { one, two };
  // 提升为整形
  int a = one;
  // Day w = Day(8);
  Day w = (Day)-2;
  std::cout << w << std::endl;
  return 0;
}
