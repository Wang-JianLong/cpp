#include <iostream>
using namespace std;

void init(int* begin,int* end,int value);

int main()
{
  int array[] = {3,3,3};
  init(array,array+2,1);
  for (int i = 0; i < 3;++i)
  {
    cout << array[i] << endl;
  }
  return 0;
}

void init(int* begin,int* end,int value)
{
  if(begin == end)
    *begin = value;
  do{
    *begin = value;
  } while(begin++ != end);

}
