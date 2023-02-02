#include <iostream>

int main() {
  // 编译器不会检查使用的下标是否有效
  // 只写大括号可以初始化全部为0
  // int array[10] = {};
  // c++ 省略大括号写法
  int array[10]{};
  int i{1};
  std::cout << "int array[10] size of " << sizeof array << std::endl;
  std::cout << "array[0] size of " << sizeof array[0] << std::endl;
  std::cout << array[1] << std::endl;

  // 一定要初始化 就会将所有数据初始化为0
  for (int i = 0; i < 10; i++) {
    std::cout << array[i] << std::endl;
  }

  // 显式初始化元素可以不用指定个数
  int a[] = {3, 2};

  std::cout << "int a[] size of " << sizeof a << std::endl;
  return 0;
}
