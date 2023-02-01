#include <cstring>
#include <iostream>
void get_line();
void get_like_dessert(void);

int main() {
  // 字符串是存储在内存中的连续字节中的一系列字符
  // 拼接 字符串
  std::cout << "a"
               "b"
            << std::endl;
  char name[12] = "zhangsan";
  std::cout << name << std::endl;
  name[3] = '\0';
  std::cout << name << std::endl;
  // get_like_dessert();
  get_line();
  return 0;
}

void get_line() {
  using namespace std;
  char ch[1024];
  // 字符串  读取最大字节1024-1  读取到什么结束
  // cin.getline(ch, 1024, '1');
  // std::cout << ch << std::endl;
  // cin.getline(ch, 20); // 会丢弃换行符
  // cin.get(ch, 20).get(); // 读取一行19个字符  保留换行符
  // cin.get();
  // std::cout << ch << std::endl;
  char ch2[12];
  cin.getline(ch, 10);
  cin.getline(ch2, 11);
  std::cout << "ch1=" << ch << "\nch2=" << ch2 << std::endl;
}
void get_like_dessert() {
  using namespace std;
  char name[20];
  char dessert[20];
  cin >> name; // cin 是以空格制表符 回车区分是否写入完成
  std::cout << "name=" << name << std::endl;
  cin >> dessert;
  std::cout << "dessert=" << dessert << std::endl;
}
