#include <iostream>
/*
共用体每次只能使用一个成员变量
长度为最大成员变量的长度为准
成员变量指向的内存地址一致
*/
union MyStruct {
  short name;
  int age;
  long phone;
};
/*
 *匿名共用体的两个属性被视为结构体W的两个成员
 它们的地址相同

 */
struct W {
  int id;
  union {
    int p_id;
    int p_nu;
  };
};

int main() {
  // MyStruct m;
  // m.name = 9;
  // // 10
  // std::cout << m.name << std::endl;    // 9
  // std::cout << m.age << std::endl;     // 9
  // std::cout << m.phone << std::endl;   // 9
  // std::cout << sizeof(m) << std::endl; // 8
  // std::cout << &m.phone << std::endl;
  // std::cout << &m.age << std::endl;
  // std::cout << &m.name << std::endl;
  //
  // union {
  //   short name;
  //   int age;
  //   long phone;
  // } n;

  W w{};
  w.p_id = 100;
  std::cout << w.id << std::endl;
  std::cout << w.p_id << std::endl;
  std::cout << w.p_nu << std::endl;
  std::cout << &w.id << std::endl;
  std::cout << &w.p_id << std::endl;
  std::cout << &w.p_nu << std::endl;
  std::cout << "w sizeof=" << sizeof(w) << std::endl;
  return 0;
}
