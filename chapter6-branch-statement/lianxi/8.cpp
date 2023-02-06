#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  ifstream fin; 
  fin.open("wjl.txt");
  if (!fin.is_open())
  {
    cout << "打开文件失败!!!"<< endl;
    exit(EXIT_FAILURE);
  }

  int count;
  char ch;
  //while(fin >> ch)
  while(fin.get(ch))
  {
    cout << ch;
  }
  fin.close();
  return 0;
}
