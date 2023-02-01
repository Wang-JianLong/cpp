#include <ctime>
#include <functional>
#include <ios>
#include <iostream>
#include <ostream>

int main() {
  int i = 10;
  // 八进制 0 开头 第二位 1~7
  int i1 = 042;
  // 十六进制 0x
  int i2 = 0xA5;
  std::cout << i << std::endl;  // 10
  std::cout << i1 << std::endl; // 34
  std::cout << i2 << std::endl; // 165

  int i3 = 42; // 修改输出格式
  char ch = 'M';
  std::cout << std::hex << 42 << std::endl;      // 16
  std::cout << std::dec << 42 << std::endl;      // 10
  std::cout << std::oct << 42 << std::endl;      // 8
  std::cout << std::dec << (int)ch << std::endl; // 输出77

  std::cout.put(ch);
  std::cout << std::endl;
  // char ch1;
  // std::cin >> ch1;
  // std::cout << ch1 << std::endl;
  // /a 终端振j
  std::cout << "123\a\b" << std::endl;
  
  return 0;
}
