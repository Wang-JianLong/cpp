#include <iostream>
using namespace std;

// template <typename AnyNumber> 
// C++ 
// class 向后兼容 typenam出自98
template <class AnyNumber> 
void Swap(AnyNumber & a, AnyNumber & b = 1);

int main()
{
    int a = 1,b = 0;;
    double c = 1.0,d = 0.0;;
    Swap(a,b);
    Swap(c,d);
    cout << "a = " << a << "  b = " << b << endl; 
    cout << "c = " << c << "  d = " << d << endl;
    return 0;
}


template <class AnyNumber> 
void Swap(AnyNumber & a, AnyNumber & b)
{
    AnyNumber temp = a;
    a = b;
    b = temp;
}

