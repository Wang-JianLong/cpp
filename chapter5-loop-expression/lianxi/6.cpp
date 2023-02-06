#include <iostream> 

int main()
{
  using namespace std;
  int sales[3][12]{};
  for ( int i = 0; i < 3 ;i++)
  {
    cout << "请输入第" << i + 1 << "年的销售量" << endl; 
    for (int j = 0; j < 12; j++)
    {
      cout << "请输入第" << i + 1 << "年"<< "第"<< j+1<<"月的销售量" << endl; 
      cin >> sales[i][j];
    }
  }


  for ( int i = 0; i < 3 ;i++)
  {
    cout << "第" << i + 1 << "年的销售量" << endl; 
    for (int j = 0; j < 12; j++)
    {
      cout <<sales[i][j] << "\t" ; 
    }
    cout << endl;
  }
  
  return 0;
}
