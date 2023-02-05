#include <iostream>

int main(int argv,char *argc[])
{
  using namespace std;
  //char ch;
  // EOF 标志为-1
  //while ((ch = cin.get()) != EOF)
  //{
  //  cout.put(ch);
  //}
  // 在有些系统里 char类型是没有符号的
  // 就意味着 ch 不可能被赋值等于-1
  int ch = -1; 
  while ((ch = cin.get())!= EOF)
  {
    cout.put(char(ch));
  }
  return 0;
}
