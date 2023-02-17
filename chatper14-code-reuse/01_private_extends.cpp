#include <iostream>
#include <valarray>
using namespace std;
// 私有继承 private  也可以保护继承protected 两者都是不在对外暴露基类接口 但是保护继承可以有第三代 而私有继承不行
class MyClass: private string, private valarray<int>
{
    public:
        MyClass();
        using std::string::size;
        using valarray<int>::max;

};

MyClass::MyClass():string("hello"),valarray(10,10)
{
    int i = size();
    cout << i << endl;
    cout << string::size() << endl;
}


int main(int argc, char const *argv[])
{
    MyClass m;
    string & s = (string & )m;
    cout << s << endl;
    return 0;
}
