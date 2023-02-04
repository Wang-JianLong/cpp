#include <array>
#include <iostream>

int main(int argc, char *argv[]) {
  using namespace std;
  array<double, 3> a;
  std::cout << "请输入第1次码跑的成绩：";
  cin >> a[0];
  std::cout << "请输入第2次码跑的成绩：";
  cin >> a[1];
  std::cout << "请输入第3次码跑的成绩：";
  cin >> a[2];

  std::cout << "平均值是" << (a[0] + a[1] + a[2]) / 3 << std::endl;
  return 0;
}
