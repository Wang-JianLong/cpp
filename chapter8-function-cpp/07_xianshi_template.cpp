#include <iostream>
using namespace std;

// 显示具体化函数
// 具体化优先次序   非模板常规函数， 具体化模板函数， 常规模板函数
struct job {
    char name[20];
    double salay;
    int floor;
};

// 常规函数
// void Swap(int &,int &):
// 模板函数
// template <class/typename T>void Swap(T & a,T & b);
// 显示具体化模板函数

// 首先定义一个模板方法
template <class T> void Swap(T & a, T & b);
// 具体化模板函数必须有一个基础模板函数；
template <> void Swap<job>(job & a,job & b);
int main()
{
    
    int a = -1, b = 1;
    //Swap(a,b);
    cout << " a = " << a << "\tb = " << b << endl;
    job c = {"zhangsan",10000.00,1};
    job  d= {"lisi",1000.00,2};
    Swap(c,d); 
    cout << c.name << "\t" << c.salay << "\t"<< c.floor << endl;
    cout << d.name << "\t" << d.salay << "\t"<< d.floor << endl;
    
    short s1 = 101;
    short s2 = 102;
    // 直接实例化函数定义
    Swap<short>(s1,s2);
    cout << " s1 = " << s1 <<  " s2 = " << s2;
    return 0;
}

template <class T>  void Swap(T & a,T & b)
{
    T temp ;
    temp = a;
    a = b;
    b = temp;
}
    
//  <job> 是可选的
//template <> void Swap<job>(job & a,job & b)
template <> void Swap(job & a,job & b)
{
    double tsalay;
    tsalay = a.salay;
    a.salay = b.salay; 
    b.salay = tsalay;
   
    int tf;
    tf = a.floor;
    a.floor = b.floor;
    b.floor = tf;
}
