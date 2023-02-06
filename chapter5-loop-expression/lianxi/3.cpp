#include <iostream>
using namespace std;
int main(int argc,char* argv[])
{
  cout << "请输入数字:"; 
  int i = 0,sum = 0;
  cin >> i;
  while(i) {
    cout << "合计为：" << (sum += i) << endl; 
    cin >> i;
  }

  cout << "程序结束 最后值为:" << sum << endl;
  return 0;

}
