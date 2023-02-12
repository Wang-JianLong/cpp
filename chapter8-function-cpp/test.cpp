#include <iostream>
using namespace std;
template <class T> T get(T);

template <> int get<int>(int a);

int main() 
{
  int i = 0;
  i = get(i + 3);
  cout << i << endl;
  cout << get(double(100)) << endl;
  // 调用显式实例化
  cout << get<short>(100) << endl;
  return 0;
}
template <class T> T  get(T i)
{
    return i + 100;
}

template <> int get<int>(int a)
{
    cout << " 显式模板 " << endl;
    return a * a;
}
