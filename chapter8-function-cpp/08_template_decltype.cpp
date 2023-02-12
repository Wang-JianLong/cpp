#include <iostream>
using namespace std;

template <typename T,typename R> R  get(T a, R b);

// 在预先不知道返回类型的情况下 使用decltype关键字
// 函数原型 : auto func_name(args) -> reture_type
// -> result_type 表示后置返回值类型提供的意思
// auto 占位符  表示后置返回类型提供的类型 
template <typename T1, typename T2> 
auto gt(T1 t,T2 tw) -> decltype(t + tw);

int main()
{
    int a = 0;
    long long  b = 0;
    cout << typeid(gt(a,b)).name() << endl;
    return 0;
}


template <typename T,typename R> R  get(T a, R b)
{
    // decltype 关键字 根据传进去的参数 置为该参数的类型
    decltype(b) result = a + b;
    return result;
}

/*
   有这样一种函数 
   template <class T1, class T2> 
   ?return_type? gt(T1 x, T2, Y)
   {
        return x + y;
   }
   // 不返回值 上面一种的情况是我们预先知道返回的是什么类型 而这一次 无法确定 
   而decltype 关键字也无法作为返回类型 如 ：decltype(x +y);
   而 参数 x和 y也不在作用域内
   那么c++有了一种新的语法
 */

template <typename T1,typename T2> 
auto gt(T1 t,T2 tw) -> decltype(t + tw)
{
    return t + tw;
}
