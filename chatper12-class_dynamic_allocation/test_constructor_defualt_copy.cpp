#include <iostream>

class T
{
  public:
    T(const T & t);
    T(){};
};

T::T(const T & t)
{
  using namespace std;
  cout << "default..." << endl;
}

void func(T t)
{}

T get()
{
  T t;
  return t;
}

int main()
{
  using namespace std;
  T t;
  func(t);
  T t2 = get();
  return 0;
}

