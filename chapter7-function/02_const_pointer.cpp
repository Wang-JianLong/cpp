#include <iostream>
using namespace std;
int main()
{
  // Yes
  int a = 100;
  int* ap = &a;
  *ap = 1000;
  cout << a << endl;

  int b = 10000;
  const int* bp = &b;
  //No
  //*bp = 100;
  b= 100;
  cout << b << endl;


  int c = 100;
  const int* cp = &c;
  // No
  // int* ccp = cp;
  const int* ccp = cp;

  const int d = 100;
  // No
  // int* dp = &d;
  const int* dp = &d;


  const int* aap = ap;
  // 注意: 只有一层间接关系时 才可以将非const 指针赋值给const指针
  return 0;

}
