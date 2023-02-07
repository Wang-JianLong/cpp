#include <iostream>
using namespace std;

void print(int (*array)[4], int size); 
int main()
{
  int array[3][4]  = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
  // 这里数组名是第一个元素（数组)的指针
  cout << sizeof array << endl; // 48
  print(array,3); 
  return 0;
}

// void print(int array[][4], int size) 
void print(int (*array)[4], int size) 
{
  // cout << sizeof array << endl; // 8 (windows64)
  for (int i = 0; i < size; ++i)
  {
    for (int j = 0; j < 4; ++j)
    {
      // cout << array[i][j] << "\t";
      cout << *(*(array + i) + j) << "\t";
    }
    cout << endl;
  }
}
