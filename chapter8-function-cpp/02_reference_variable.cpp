#include <iostream>
using namespace std;

int main()
{
    int i = 0;  
    int & j = i;
    int l = j;
    // 引用变量和所引用的变量指向同一k个值与内存单元
    cout << "i = " << i << "\tj = " << j << "\tl = " << l << endl;
    cout << "int & j = i;" << endl;
    cout << "i address = " << &i << "\tj address = " << &j << endl;
    cout << "int l = j" << endl; 
    cout << "i address = " << &i << "\tl address = " << &l << endl;
    cout << "i += 1" << endl;
    i+=1;
    cout << "i = " << i << "\tj = " << j << "\tl = " << l << endl;
    // 简单理解 引用必须初始化时创建 赋值并不会改变引用所指向的变量和内存地址
    // 简单来说 就是所引用变量的别名 
    // 效果等价于 int* const pt = &i; 而j就是 *pt 所指向的地址不可变
    return 0;
}

