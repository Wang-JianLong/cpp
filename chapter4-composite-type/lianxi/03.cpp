#include <cstring>
#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
  char first_name[20], last_name[20];
  cout << "请输入 名字：";
  cin.getline(last_name, 20);
  cout << "请输入 姓氏：";

  cin.getline(first_name, 20);
  int len = strlen(first_name) + strlen(last_name) + 4;
  char name[len];

  strcpy(name, first_name);
  strcat(name, ", ");
  strcat(name, last_name);

  std::cout << "name=" << name << std::endl;
  return 0;
}
