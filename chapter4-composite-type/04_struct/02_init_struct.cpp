#include <iostream>
// 1
struct MyStruct {
  std::string name;
  int age;
};

// 2
struct MyStruct2 {
  std::string name;
  int age;
} s2;

// 2
struct MyStruct3 {
  std::string name;
  int age;
} s3 = {"name", 14};

int main() {
  // 3
  struct MyStruct4 {
    std::string name;
    int age;
  } s4 = {"张三"};

  MyStruct s1 = {"name", 12};

  // 5
  MyStruct s5 = {.age = 12};

  // 6
  MyStruct s6 = {};
  // 7
  MyStruct s7{};
  // 8
  struct {
    std::string name;
    int age;
  } s8 = {"noNameStruct"};
  std::cout << s8.name << std::endl;
  std::cout << s8.age << std::endl;
  return 0;
}
