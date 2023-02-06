#include <iostream>

int main()
{
  using namespace std;
  char ch;
  cin.get(ch);
  while(ch != '.') 
  {
    if (ch == '\n')
      cout << ch;
    else 
       cout << ++ch; // 会是下一个字母
      // 而这样 就会发生整形提升
      // cout << ch + 1;
    cin.get(ch);
  }
  return 0;
  
}

