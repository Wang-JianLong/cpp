#include <iostream>

void init(int array[],int size,int init_value);

int main()
{
  using namespace std;
  int array[] = {3,2,1};
  init(array,sizeof(array)/sizeof(int),1);
  for( int i = 0; i < sizeof(array)/sizeof(int); ++i)
  {
    cout << array[i] << endl;
  }

  return 0;
}

void init(int array[],int size,int init_value)
{
  for( int i = 0; i < size; ++i)
  {
    array[i] = init_value;
  }
}
