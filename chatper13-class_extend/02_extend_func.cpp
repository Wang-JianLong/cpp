#include <iostream>

using namespace std;

class Aminal
{
   public:
    virtual void run(); 
    virtual void run(string s);
    virtual ~Aminal();
   protected:
    string name;
    void miao();
};

class Cat: public Aminal
{
    public:
        void run();
        // void run(string s);
        void test()
        {
            cout << name << endl;
            miao();
        }
        ~Cat();
};

// 基类和派生列不能重载 如果派生类要重新定义基类中重载的方法 则要把所有同名能够重载的方法重新定义
int main(int argc, char const *argv[])
{
    Cat cat;
    // cat.run("fjsdklf");   
    return 0;
}
