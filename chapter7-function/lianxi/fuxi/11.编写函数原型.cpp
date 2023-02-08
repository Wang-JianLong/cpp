#include <iostream>

typedef int (*P_F)(const double);

//int judge( int(*)(const double) );
int judge( P_F );

int dd(const double);
int main()
{
  using namespace std;
  cout << judge(dd) << endl;
  return 0;
}


//int judge(int (*pf)(const double) ) 
int judge(P_F pf) 
{
  return (*pf)(100);
}

int dd(const double d)
{
  return int(d * 100);
}
