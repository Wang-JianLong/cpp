#include <iostream>

using namespace std;

int get_cookie_num(const int array[],int);

int main()
{
  int cookies[] = {1,2,3,4,5};
  int *cp = cookies;
  int (*p)[5] = &cookies;
  cout << sizeof(cookies) << endl; // 20
  cout << sizeof(cp) << endl; // 8
  cout << sizeof(p) << endl; // 8
  cout << sizeof(&cookies) << endl; // 8
  // &cookies 返回的是指向20个字节内存块的内存地址                        
  int sum = get_cookie_num(cookies,5);
  cout << sum << endl;
  return 0;
}
// 将数组作为参数传递时实际上是按照指针传递的 占用的为指针占用的8个字节(Windows 64)
int get_cookie_num(const int cookies[],int size)
{
  // cout << sizeof(cookies) << endl;
  int sum,i;
  for (i = 0; i < size; ++i)
  {
    sum += cookies[i];
    // cookies[i] += 1;
  }
  return sum;
}
