#include <iostream>
#include <array>
using namespace std;
int main()
{
  const int ArSize = 16;
  array<long double,ArSize> arr;
  arr[0] = arr[1] = 1L;
  for (int i = 2; i < ArSize ; i++)
  {
     arr[i] = arr[i-1] * i;   
  }

  for (int i = 0; i < ArSize;++i)
  {
    cout << arr[i] << "\t";
  }
  return 0;
}
