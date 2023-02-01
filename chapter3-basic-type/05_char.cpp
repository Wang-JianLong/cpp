#include <iostream>

int main() {
  wchar_t c1 = L'P';
  // 显示宽字符版本
  std::cout << c1 << std::endl;      // 80
  std::cout << L"tail" << std::endl; // 0x56...
  char16_t c2 = u'a';
  char32_t c3 = U'a';
  std::cout << c2 << std::endl; // 97
  std::cout << c3 << std::endl; // 97
  return 0;
}
