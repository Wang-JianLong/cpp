#include <iostream>

int main() {
  // 运算时两侧数据会转换为较大那一个类型进行运算
  // 整形提升
  int i = 100;
  double d = (double)i;
  // C++独有的
  float f = float(d);
  long l = static_cast<long>(f);
  double dd = 1.9999;
  int ii = static_cast<int>(dd);
  std::cout << ii << std::endl;
  std::cout << char(100) << std::endl;
  return 0;
}
