#include <iostream>

struct MyStruct {
  std::string name;
  int age;
};

struct BitMyStruct {
  int age : 2;
  int age2 : 2;
  int age3 : 2;
  int age4 : 2;
};

int main() {
  MyStruct mss[20]{{"1", 12}, {"2", 13}};
  std::cout << mss[0].age + mss[1].age << std::endl;
  std::cout << sizeof(BitMyStruct) << std::endl;
  BitMyStruct bit = {1, 2, 1, 1};
  std::cout << sizeof(bit) << std::endl;
  return 0;
}
