#include <iostream>
#include <cstring>
using namespace std;

template <typename T>
T max(T ts[],int size);

template <> char * max<char*>(char* cs[],int size);

int main()
{
    double ds[5] = {1,0.1,3,34,3}; 
    cout << max(ds,5) << endl;
    char* cs[3] = {"abc","aaaaaaaaa","abcd"};
    cout << max(cs,3) << endl;
    return 0;
}



template <typename T>
T max(T ts[],int size)
{
    size = size < 0 ? 0 : size;
    T result = ts[0];
    for(int i = 1; i < size; ++i)
    {
        if (ts[i] > result)
            result = ts[i];
    }
    return result;
}

template <> char * max<char*>(char* cs[],int size)
{
    size = size < 0 ? 0 : size;
    char* chs = cs[0];
    for (int i = 0; i < size; ++i)
    {
        if(strlen(cs[i]) > strlen(chs))
        {
            chs = cs[i];
        }
    }
    return chs;
}
