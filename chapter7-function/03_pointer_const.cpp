#include <iostream>
using namespace std;

int main()
{
  // const int* p = ...;
  // 这样不让p修改所指向地址的值 但是却可以改变p本身的值 也就是说 p能被重新赋值一个指针
  // p = &...;
  int i = 100;
  int * const ip =&i;
  *ip = 1;
  cout << i << endl;

  // 以上例子中 
  // *p 和 ip 都是const的 但是 p 和 *ip不是const
  return 0;
}
