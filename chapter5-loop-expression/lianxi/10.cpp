#include <iostream>

int main()
{
  using namespace std;
  int row;
  cout << "Enter number of rows:";
  cin >> row;

  for ( int i = row; i > 0; --i)
  {
    for ( int j = i - 1; j > 0; --j)
    {
      cout << '.';
    }
    
    for ( int j = row - (i - 1); j > 0; j--)
    {
      cout << '*';
    }
    cout << endl;
  }
  return 0;
}
