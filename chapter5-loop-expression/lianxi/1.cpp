#include <iostream>
using namespace std;
int main()
{
  int begin,end,sum;
  cout << "请输入循环开始数字：";
  cin >> begin;
  cout << "请输入循环结束数字：";
  cin >> end;
  for (;begin <= end; ++begin)
  {
    sum+=begin;
  }
  cout << "和为:"<< sum << endl;
  return 0;
}
