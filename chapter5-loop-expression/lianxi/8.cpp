#include <iostream>
#include <cstring>
using namespace std;
int main()
{ 
  cout << "Enter words(to stop, type the word done) : ";
  int count = 0;
  char word[20]; 
  cin >> word;
  while(strcmp(word,"done"))
  {
    count ++;
    cin >> word;
  }
  cout << "You entered a total of "<< count << " words"<< endl;
  return 0;
}
