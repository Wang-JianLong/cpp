#include <iostream>
struct My{
    std::string name;
    mutable int age;
};

int main()
{
    using namespace std;
    const My my = {"zhangsan",12};
    my.age  = 15;
    cout << my.name << "\t" << my.age << endl;
    return 0;
}
