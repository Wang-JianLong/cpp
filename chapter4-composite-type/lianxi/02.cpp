
#include <iostream>
// #include <string>
using namespace std;
// 成绩向下调整
int main(int argc, char *argv[]) {
  string firstName, lastName;
  int age;
  std::cout << "first name :";
  getline(cin, firstName);
  std::cout << "last name :";
  getline(cin, lastName);
  std::cout << "age :";
  cin >> age;
  std::cout << "deserve :";
  char deserve;
  cin >> deserve;
  std::cout << "name :" << lastName << "," << firstName << std::endl;
  std::cout << "age :" << age << std::endl;
  std::cout << "deserve :" << ++deserve << std::endl;

  return 0;
}
