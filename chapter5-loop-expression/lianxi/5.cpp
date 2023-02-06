#include <iostream>

int main()
{
  using namespace std;
  int sales[12]{};

  for (int i = 0; i < 12; i++)
  {
    cout << "请输入"<< i+1 << "月份的销售量: ";
    cin >> sales[i];
  }

  for (int i =0;i < 12;i ++)
  {
    cout << i+1 << "月的销售量:"<< sales[i] << endl;
  }
  return 0;
}
