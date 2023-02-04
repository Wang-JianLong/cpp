#include <iostream>

int main(int argc, char *argv[]) {
  int *array = new int[10];
  std::cout << "sizeof array= " << sizeof array << std::endl;
  *array = 1;
  *(array + 1) = 2;

  std::cout << *array << std::endl;
  std::cout << array[0] << std::endl;
  std::cout << *(array + 1) << std::endl;
  std::cout << array[1] << std::endl;
  int tell[10];
  int(*wjl)[10] = &tell;
  delete[] array;
  return 0;
}
