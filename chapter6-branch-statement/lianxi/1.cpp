// 编写一个回显 数字除外 大小写互逆

#include <iostream>
#include <cctype>
using namespace std;
int main()
{
  char ch;
  while((ch = cin.get()) != '@')
  {
    if(isdigit(ch))
      continue;
    if(isupper(ch))
    {
      ch = tolower(ch);
    }
    else{
      ch = toupper(ch);
    }
    cout << ch;
  }
  return 0;
}
