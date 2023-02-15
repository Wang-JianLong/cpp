#ifndef _CONSTRUCT
#include <string>
#define _CONSTRUCT
class User {
private:
  int id;
  std::string name;

public:
  User(int, std::string);
  std::string getName();
};

#endif
