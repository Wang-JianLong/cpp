
#include <cstring>
#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
  string first_name, last_name;
  cout << "请输入 名字：";
  getline(cin, last_name);
  cout << "请输入 姓氏：";
  getline(cin, first_name);

  string name = last_name + ", " + first_name;

  std::cout << "name=" << name << std::endl;
  return 0;
}
