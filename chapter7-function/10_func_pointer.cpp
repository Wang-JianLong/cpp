#include <iostream>
using namespace std;


typedef int (*PT_FUN)(int);
// int (*select(int)) (int);
PT_FUN select(int);

int s(int);

const string f1(const int[],int size);
void print();

int main()
{
  // void (*pf)() = &print; 
  // void (*pf)() = print; 
  auto pf = print;
  // pf();
  (*pf)();
  int a[] = {1,2,3};

  // 函数指针数组
  const string (*fs[3])(const int[],int) = { f1,f1,f1};
  PT_FUN pft = select(0);
  cout << (*pft)(10) << endl;
  return 0;
}


void print()
{
  cout << "Hello" << endl;
}

const string f1(const int a[],int size){
  string str;
  for ( int i = 0; i < size ; ++i )
  {
    str += to_string(a[i]); 
  }
  return str;
}

PT_FUN select(int)
{
  return s;
}

int s(int a)
{
  return a * 10;
}
