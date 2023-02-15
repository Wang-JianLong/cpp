#include <iostream>
using namespace std;

class Data
{
    private:
        int data;
    public:
        Data(int i);
        // C++11 可将此关键字修饰 目的 强制转换
        explicit operator double();
        operator int();
};

Data::Data(int i)
{
    data = i;
}

Data::operator double()
{
    return double(data);
}


Data::operator int()
{
    return (data);
}

int main()
{
    Data d = Data(10);
    int i = d;
    double db = d;
    cout << i << endl;
    cout << db << endl;
    // 此时 cout无法分辨在上下文环境中究竟转换为 int？double? 导致无法隐式转换且无声明 operator<< 方法而报错
    cout << d << endl;
    return 0;
}
