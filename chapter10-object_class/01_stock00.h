#ifndef _STOCK00_H_
#define _STOCK00_H_
#include <string>
class Stock {
  // 默认private
private:
  std::string name;

public:
  std::string getName();
  void setName(std::string name);
};

#endif
