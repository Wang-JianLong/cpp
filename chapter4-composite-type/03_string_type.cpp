#include <iostream>
#include <string>

#include <iostream>

int main() {
  std::string str;
  str = "aaaa";
  std::cout << str << std::endl;
  // std::cin >> str;
  // std::cout << str << std::endl;
  std::cout << str[2] << std::endl;
  int i = str.length();
  std::cout << i << std::endl;
  // std11 raw字符串
  std::cout << R"("\""?"")" << std::endl;
  // 但是无法转义自身的 "()"  于是就有了 R"+*(  )+*"
  std::cout << R"+*("()")+*" << std::endl;
  // 结合宽字符使用
  std::cout << LR"+*("()")+*" << std::endl;
  std::cout << UR"+*("()")+*" << std::endl;
  std::cout << uR"+*("()")+*" << std::endl;
  return 0;
}
