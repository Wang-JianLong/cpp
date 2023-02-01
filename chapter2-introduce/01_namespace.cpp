#include <iostream>

int main() {
  // 1 声明std名称空间所有名称
  //  using namespace std;
  // 2 声明个别要使用的名称
  //  using std::cout;
  //  using std::endl;
  //  cout << "Hello world!!" <<endl;

  // 3 直接名称空间引用
  std::cout << "Hello world!!" << std::endl;
  return 0;
}
