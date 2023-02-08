# include <iostream>

using namespace std;
int replace(char *str,char c1,char c2);

int main()
{
  // char * 指向的字符串放置在常量储存区 无法修改但是可读
  // char* str = "1112222";
  char str []= "1112222";
  int count = replace(str,'1','2');
  cout << "cout="<< count << "\tstr=" << str << endl;
  return 0;
}

int replace(char *str,char c1,char c2)
{
   int count = 0; 
   char *tmp = str;
   for ( int i = 0; *(tmp+i)!= '\0'; i++)
   {
     if(tmp[i] == c1)
      {
        tmp[i] = c2;
        count++;
      }
   }
   return count;
}
