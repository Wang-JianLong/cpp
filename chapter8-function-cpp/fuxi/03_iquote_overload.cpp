#include <iostream>

template <typename T> void iquote(T);

template <> void iquote(int);

template <> void iquote<double>(double);

template <> void iquote(std::string);

int main()
{
    using namespace std;
    return 0;
}
