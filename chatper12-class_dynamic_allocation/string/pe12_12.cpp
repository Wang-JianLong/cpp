#include <iostream>
#include "string.h"
using namespace std;

int main(int argc, char const *argv[])
{
    String s1 = " and I am a C++ student.";
    String s2 = "Plase enter your name:";
    cout << s2;
    String s3;
    cin >> s3;
    s2  = "My name is " + s3;
    cout << s2 << endl;    

    s2 = s2 + s1;
    s2.StringUpper();
    cout << "The string \n" << s2 << "\ncontains" << s2.char_cout('A') 
    << "'A' characters in it,\n" ;
    s1 = "red";
     String rbg[3] = {String(s1),String("green"),String("blue")};
     cout << "Enter the name of a primary color for mixing light:";
     String ans;
     bool success = false;
     while(cin >> ans)
     {
         ans.StringLow();
         for (int i = 0; i< 3; i++)
         {
              if(ans == rbg[i])
              {
                 cout << "That's right~" << endl;
                 success = true;
                 break;
              }
         }
         
         if(success)
             break;
         else
             cout << "Try again~" << endl;
     }
     cout << "Bye\n" << endl;
     return 0;
}
