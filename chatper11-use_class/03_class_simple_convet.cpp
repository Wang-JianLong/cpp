#include <iostream>
using namespace std;

class Data
{
    private:
        int data;
    public:
        // Data(int i);
        // Data(int i, double d = 100);
        // 禁止直接赋值 
        // explicit 
        Data(int i,double d = 100);
        Data get() const;
        friend std::ostream & operator<<(std::ostream & os, const Data & d);
        // 转换函数
        operator double() const;
};

std::ostream & operator<<(std::ostream & os, const Data & d)
{
    os << d.data;
    return os;
}

Data::Data(int i,double d)
{
    data = i;
    cout << d << endl;
}
// 奇葩
Data Data::get() const
{
    return 1000.00;
}

Data::operator double() const
{
    return data; 
}


int main()
{
    Data d = 100; 
    cout << d << endl;
    Data d1 = d.get();
    cout << d1 << endl;

    double dd = double(d1);
    // 由于类中只定义了 转换为 double 的方法 不存在二义性 可以隐师转换 如果再定义一个转换int的就会报错
    double ddd = d;
    cout << dd << endl;
    cout << ddd << endl;
    return 0;
}
