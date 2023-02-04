#include <array>
#include <iostream>
#include <vector>
int main(int argc, char *argv[]) {
  // std::vector<int> n;
  int n = 5;
  std::vector<double> vb(n);

  std::array<int, 9> a;
  std::cout << vb[1] << std::endl;
  std::cout << a[1] << std::endl;

  std::cout << vb.begin().base() << std::endl;
  return 0;
}
