#include <iostream>

int main(int argc, char *argv[]) {
  double ds[] = {1, 2, 3.3, 5, 6};
  for (double &d : ds) {
    std::cout << (d = d * 0.7) << std::endl;
  }

  for (double d : ds) {
    std::cout << d << std::endl;
  }

  for (int i : {12, 23, 34}) {
    std::cout << i << std::endl;
  }
  return 0;
}
