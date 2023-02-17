#include <iostream>
using namespace std;

class Aminal
{
private:
    string name;

public:
    Aminal() { name = "default"; }
    Aminal(const string &n) { name = n; }
    Aminal(const Aminal &a)
    {
        cout << "aminal 执行复制" << endl;
        name = a.name;
    }
    virtual ~Aminal() { cout << "aminal 执行销毁" << endl; }
    Aminal operator=(const Aminal &a)
    {
        cout << "aminal 执行赋值" << endl;
        Aminal result(a.name);
        return result;
    };
};

class Cat:public Aminal
{
    public: 
        ~Cat()
        {
            cout << "cat 执行销毁" << endl;
        }
};

int main(int argc, char const *argv[])
{
    Cat a = Cat();
    Cat b = a;
    return 0;
}
