#include <iostream>

int main()
{
  using namespace std;
  cout << "Please enter one of the fllowing choices:" << endl;
  cout << "\t c) carnoivo\t p) pianist\n\t t) tree\t g) game"<< endl; 
  char ch;
Lable:
  cin.get(ch);
  switch(ch)
  {
    case 'c':cout << "carnoivo..."; break;
    case 'p':cout << "pianist..."; break;
    case 't':cout << "tree..."; break;
    case 'g':cout << "game..."; break;
    default:
             while(cin.get() != '\n')
             {
                continue;
             }

             goto Lable;
  }
  return 0;
}  
