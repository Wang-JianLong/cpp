#include <iostream>

using namespace std;
inline void inline_func();

int main()
{
    inline_func();
    return 0;
}

inline void inline_func()
{
    cout << "inline func... " << endl;
}
