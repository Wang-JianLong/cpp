#include <iostream>
using namespace std;
int main(int argc, char *argv[]) {
  string str = "String is good!!!";
  for (int i = 0; i < str.size() - 1; i++) {
    char c = str[i];
    std::cout << c << std::endl;
  }

  int i = 0;
  i = i++ + ++i + i;
  std::cout << i << std::endl;
  return 0;
}
