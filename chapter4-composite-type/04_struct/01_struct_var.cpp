#include <iostream>
// 定义一个结构
struct MyStruct {
  std::string name;
  int age;
};

int main() {
  // c语言风格
  struct MyStruct s1;
  // c++风格
  MyStruct s2;
  s2.name = "张三";
  s2.age = 12;

  std::cout << s2.name << std::endl;
  std::cout << s2.age << std::endl;
  return 0;
}
