#include <iostream>
using namespace std;

int count = 0;

void print(char * str,int n = 0);

int main()
{
    print("a");
    print("a");
    return 0;
}

void print(char * str, int n)
{
   count ++; 
   if (n == 0)
   {
        for (int i = 0; i < count; ++i)
        {
            cout << str << endl;
        }
   }
   else 
   {
       cout << str << endl;
   }

}
