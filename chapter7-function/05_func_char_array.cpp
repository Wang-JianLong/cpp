#include <iostream>
using namespace std;

unsigned int get_str_len(const char*);
char* get_str(char ch,int sum);

int main()
{
  char * str = "hello world";
  unsigned int count = get_str_len(str);
  cout << count << endl;
  char* str1 = get_str('+',10);
  cout << str1  << endl;
  delete [] str;
  return 0;
}

unsigned int get_str_len(const char * str)
{
  unsigned int count; 
  const char* tmp = str;
  while(*tmp) // \0 == int 0
  {
    count++;
    tmp++; // to next;
  }
  return count;
}

char* get_str(char ch,int sum)
{
  const int len = sum + 1;
  // char str[len];
  char* str = new char[len];
  str[len] = '\0';
  
  for (int i = 0; i < len; ++i)
  {
    str[i] = ch;
  }
  return str;
}
