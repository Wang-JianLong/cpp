#include <iostream>
#include <array>

using namespace std;
const int Max = 10;
int main()
{
  array<double,Max> donation;
  int sum;
  for(int i = 0; i < Max;i++)
  {
    cout << "donation@"<<i+1<<":";
    while(!(cin >> donation[i])){
      cout << "请输入正确的数字:";
      cin.clear();
      while(cin.get() != '\n')
        continue;  
    } 
    sum += donation[i];
  }
  
  int div = sum / Max;
  cout << "平均值为："<< div<< endl;
  cout << "比平均值大的数字有：";
  for(int i = 0; i < Max;i++)
   if (donation[i] > div)
     cout << "\t" << donation[i] << ((i+1)==Max?"\n":"");
  return 0;
}
