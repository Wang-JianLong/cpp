
#include <iostream>
using namespace std;
struct CandyBar {
  string title;
  double g;
  double cal;
};

int main(int argc, char *argv[]) {
  CandyBar *cp = new CandyBar[3];
  cp[0] = {"Mocha Munch1", 2.3, 350};
  cp[1] = {"Mocha Munch2", 2.3, 350};
  cp[2] = {"Mocha Munch3", 2.3, 350};

  std::cout << cp[0].title << std::endl;
  std::cout << (*cp).title << std::endl;
  std::cout << (*(cp + 1)).title << std::endl;

  delete[] cp;
  return 0;
}
