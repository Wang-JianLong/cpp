#include <iostream>

class D
{
    private:
         int data;
    public:
         D(int i);
         // D sum(const D & d);
         D operator+(const D & d) const ;
         D operator*(double d) const ;
         int get() const;
         void show() const;
         // 友元函数 原型在声明类中 但不是成员函数 但是却有成员函数的访问权限
         friend D operator*(double num, const D & d);
};

D::D(int i)
{
    data = i;
}
// 定义友元函数的实现
D operator*(double num,const D & d)
{
    using std::cout;
    using std::endl;
    // 直接访问私有数据
    cout << d.data << endl;
    // D result(int(num * d.get()));
    D result = d * num;
    return result;
}

// D D::sum(const D & d)
// {
//     int tmp;
//     tmp = data + d.get();
//     D result(tmp);
//     return result;
// }

int D::get() const
{
    return data;
}

void D::show() const
{
    using std::cout;
    using std::endl;
    cout << this << " data: " << data << endl;
}


D D::operator+(const D & d)const
{
    int tmp;
    tmp = data + d.get();
    D result(tmp);
    return result;
}

D D::operator*(double d)const
{
    D result(int(d * data));
    return result;
}

int main()
{
    using namespace std;
    D d1(100);
    D d2(200);
    // D d3 = d1.sum(d2);
    D d3 = d1 + d2;
    cout << &d1 << " :" << d1.get() << endl;
    cout << &d2 << " :" << d2.get() << endl;
    cout << &d3 << " :" << d3.get() << endl;

    D d4 = d1 * 100;
    // error
    d4 = 100 * d2;
    cout << &d4 << " :" << d4.get() << endl;
    return 0;
}
