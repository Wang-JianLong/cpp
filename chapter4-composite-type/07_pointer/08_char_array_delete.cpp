#include <cstring>
#include <iostream>

int main(int argc, char *argv[]) {
  char target[12] = "fsdkfskldfj";
  char *wjl = new char[strlen(target) + 1]; // strlen 不包含结束符
  strcpy(wjl, target);
  std::cout << wjl << std::endl;
  delete[] wjl;
  return 0;
}
