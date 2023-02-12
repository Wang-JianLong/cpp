#include <iostream>
#include <array>
constexpr int foo(int i) {return i * 2;}

using namespace std;
// 当前线程结束消亡
thread_local int tv = 100;
static int * pr;
int a; // 程序结束消亡 且外部可访问(链接性) 
using namespace std;
// 当前线程结束消亡
thread_local int ta = 100;
static int * pt;
int a; // 程序结束消亡 且外部可访问(链接性) 
static int b; // 程序结束 内部访问

constexpr int k = 100; // 明确表示编译期常量
int main()
{
    int i; // 函数结束消亡 
    //auto int j = 0;;
    auto j = 100;
    register int c; // c++ 11 标记用 
    cout << tv << endl;
    {
        int i; // 代码块结束消亡  
    }
    cout << a << endl;
    cout << pt << endl;
    array<int,foo(5)> arr;
   return 0;
}
