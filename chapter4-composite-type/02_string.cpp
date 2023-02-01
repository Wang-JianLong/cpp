#include <cstring>
#include <iostream>
void get_line();
void get_like_dessert(void);
void get_get();
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
  get_get();
  return 0;
}

void get_get() {
  using namespace std;
  char name[12]{};
  char age[12]{};
  std::cout << "请输入您的姓名: ";
  cin.get(name, 12);
  // get读取之后不会丢弃换行符 将其留在输入队列里
  // 下次再读取就会读取到换行符且没有任何内容
  cin.get();
  cin.clear();
  std::cout << "请输入您的年龄: ";
  cin.get(age, 12);

  std::cout << "name=" << name << "   age=" << age << std::endl;
}
void get_line() {
  using namespace std;
  char name[12]{};
  char age[12]{};
  std::cout << "请输入您的姓名: ";
  cin.getline(name, 12);

  std::cout << "请输入您的年龄: ";
  cin.getline(age, 12);

  std::cout << "name=" << name << "   age=" << age << std::endl;
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
