#include <climits>
#include <iostream>
// C++字节 至少能够容纳实现的基本字符集的相邻位组成
int main() {
  using namespace std;
  cout << " short 类型的长度是" << sizeof(short) << "字节"
       << "最大支持 " << SHRT_MAX << endl;
  cout << " int 类型的长度是" << sizeof(int) << "字节"
       << "最大支持 " << INT_MAX << endl;
  cout << " long 类型的长度是" << sizeof(long) << "字节"
       << "最大支持 " << LONG_MAX << endl;
  cout << " long long 类型的长度是" << sizeof(long long) << "字节"
       << "最大支持 " << LLONG_MAX << endl;
  cout << " double类型的长度是" << sizeof(double) << "字节"
       << "最大支持 " << endl;
  cout << " float 类型的长度是" << sizeof(float) << "字节"
       << "最大支持 " << endl;

  float f = 1.2f;
  double d = 1.2;
  long long l = 1000000;
  cout << l << endl;
  cout << d << endl;
  cout << f << endl;
  return 0;
}
