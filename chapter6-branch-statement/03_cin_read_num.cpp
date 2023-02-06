#include <iostream>

const int Max = 5;
int main()
{
  using namespace std;
  int golf[Max];
  cout << "Plase enter your golf sores. "<< endl
    << "You must enter " << Max<< "rounds."<< endl;

  int i;
  for (i = 0; i < Max ; i++)
  {
    cout << "round@"<< i+1<< ":";
    // cin >> int 读取失败 不匹配的值留在队列中 错误标记被设置  cin被转换为bool false
    // 判断是否读取成功 如果是其他字符就循环读取 重新检测输入
    while(!(cin >> golf[i]))
    {
      cin.clear(); // 不设置的话程序会拒绝输入
      while(cin.get() != '\n')
        continue;
      cout << "Plase enter a number: ";
    }
  }

  double total = 0.0;
  for( i = 0; i < Max;i++)
    total += golf[i];

  cout << total / Max << " = average score "
    << Max << " rounds " << endl;
  return 0;
}
