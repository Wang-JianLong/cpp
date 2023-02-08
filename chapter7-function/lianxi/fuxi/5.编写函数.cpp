#include <iostream>
using namespace std;

double get_max(double[],int);

int main()
{
  double ds[] = {1.0,3.0,2,34,0};  
  double max = get_max(ds,5);
  cout << "max="<< max << endl;
  return 0;
}


double get_max(double ds[],int size)
{
  int i = 1;
  double max = ds[0];
  for (;i < size; ++i)
  {
    if (ds[i] > max)
      max = ds[i];
  }
  return max;
}

