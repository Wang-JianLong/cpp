#include <iostream>
using namespace std;

void reverse(double[],int size);

int main()
{
  double ds[] = { 1.0,2.3,3.4};
  reverse(ds,3);
  for(size_t i{0}; i < 3; ++i)
  {
    cout  << ds[i] << "  ";
  }
  cout << endl;
  return 0;
}


void reverse(double ds[],int size)
{
  for (int i(0); i < size/2; ++i)
  {
    double tmp = ds[i];
    ds[i] = ds[size - 1 -i];
    ds[size - 1 - i] = tmp;
  }
}

