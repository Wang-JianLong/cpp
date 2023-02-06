#include <fstream>
#include <iostream>
using namespace std;
int main()
{
  ifstream in;
  in.open("wjl.txt");
  if (!in.is_open())
  {
    cout << " 打开文件失败" << endl;
    exit(EXIT_FAILURE);
  } 
  char str[50];
  double d;
  in >> str;
  in >> d;
  cout << in.eof() << endl;
  cout << str << endl; 
  cout << d << endl;
  in.close();
  return 0;
}
