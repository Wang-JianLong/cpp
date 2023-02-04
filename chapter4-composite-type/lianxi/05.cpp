#include <iostream>
using namespace std;
struct CandyBar {
  string title;
  double g;
  double cal;
};
int main(int argc, char *argv[]) {
  CandyBar c = {"Mocha Munch", 2.3, 350};
  std::cout << c.title << std::endl;
  std::cout << c.g << std::endl;
  std::cout << c.cal << std::endl;
  return 0;
}
