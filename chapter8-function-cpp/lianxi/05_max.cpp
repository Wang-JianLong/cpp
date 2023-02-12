#include <iostream>
using namespace std;

template <typename T> 
T max(T ts[5]);

int main()
{
    double ds[5] = {1,0.1,3,34,3}; 
    cout << max(ds) << endl;
    return 0;
}

template <typename T>
T max(T ts[5])
{
    T result = ts[0];
    for(int i = 1; i < 5; ++i)
    {
        if (ts[i] > result)
            result = ts[i];
    }
    return result;
}
