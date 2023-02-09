#include <iostream>

void cube(const double & );
void cube1(const double && );

int main()
{
    double d = 0.0;
    cube1(d + 1);
    std::cout << "double d = " << d << std::endl;
    return 0;
}

// 当实际参数与引用类型不匹配时 C++ 会生成临时变量，引用该临时变量，且引用形参为 const修饰时
// 一般是非左值 和 类型不匹配
void cube(const double & d)
{
    std::cout << "double & d = " << d << std::endl;
}

void cube1(double && d)
{
    std::cout << "double & d = " << d << std::endl;
}
