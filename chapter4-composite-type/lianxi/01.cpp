#include <iostream>
using namespace std;
// 成绩向下调整
int main(int argc, char *argv[]) {
  char firstName[20]{}, lastName[20]{};
  int age;
  std::cout << "first name :";
  cin.getline(firstName, 1024);
  std::cout << "last name :";
  cin >> lastName;
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
