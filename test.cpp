#include <iostream>

long double fib(int);

int main()
{
    using namespace std;
    for (int i{0}; i < 100; ++i)
    {
        cout << "fib("<< i << ") == " << fib(i) << endl;
    }
    cout << "WJL" << endl;
    return 0;
}

long double fib(int i)
{
    if ( i == 1 || i == 0)
        return i;
    return fib(i-1) + fib(i-2);
}

