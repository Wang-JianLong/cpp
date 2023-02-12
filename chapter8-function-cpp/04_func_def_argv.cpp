#include <iostream>
using namespace std;
// 注意 默认参数从右至左 在原型中赋默认值
int area( int a, int b = 1);
int main()
{
    int num = area(10); 
    cout << "sum = " << num << endl;
    return 0;
}


int area( int a, int b)
{
    return a * b;
}
