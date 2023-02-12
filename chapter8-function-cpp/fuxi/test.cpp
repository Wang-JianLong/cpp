#include <iostream>

auto fib(int i) -> int ;

int main()
{
    using namespace std;
    cout << "Hello World" << endl;
    cout << fib(8) << endl;
    return 0;
}


auto fib(int i) -> int 
{
  if(i < 0)
  {
    std::cout << "Can't run fib FAILD" << std::endl;
    exit(EXIT_FAILURE);
  }
  
  if(i <= 1)
    return i;
  return fib(i - 1) + fib(i - 2);
}
