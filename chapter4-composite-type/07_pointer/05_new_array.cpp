#include <iostream>

int main(int argc, char *argv[]) {
  int n = 12;
  // 创建一个动态数组 指针值为第一个元素的指针
  int *array = new int[n];
  std::cout << array << std::endl;
  // 因为是int类型原因 两个地址之间相差4个字节
  std::cout << array + 1 << std::endl;
  delete[] array;
  return 0;
}
