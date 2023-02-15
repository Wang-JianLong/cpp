#include "02_constrct.h"
#include <iostream>

User::User(int m_id, const std::string m_name) {
  id = m_id;
  name = m_name;
}

std::string User::getName() { return name; }
int main(int argc, char *argv[]) {
  User u1 = User(1, "zhangsan");
  User u2(2, "lisi");
  // User u3;
  User * u3 = new User(2,"zhaoliu");
  std::cout << u1.getName() << std::endl;
  std::cout << u2.getName() << std::endl;
  std::cout << u3->getName() << std::endl;
  delete u3;
  return 0;
}
