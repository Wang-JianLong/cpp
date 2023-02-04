#include <iostream>
using namespace std;
struct CandyBar {
  string title;
  double g;
  double cal;
};

int main(int argc, char *argv[]) {

  CandyBar cs[3] = {{"Mocha Munch1", 2.3, 350},
                    {"Mocha Munch2", 2.3, 350},
                    {"Mocha Munch3", 2.3, 350}};

  std::cout << cs[0].title << std::endl;
  std::cout << (*cs).title << std::endl;
  std::cout << (*(cs + 1)).title << std::endl;
  return 0;
}
