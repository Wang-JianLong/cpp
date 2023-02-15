#include <iostream>
namespace test
{
    class T
    {
        public: 
        enum Model {RECT};
        int data;
        T operator-();
    };
};

test::T test::T::operator-()
{
   T result; 
   result.data = (-data);
   return result;
}

int main()
{
    using namespace std;
    test::T t;
    t.data = 10;
    test::T t1 = -t;
    cout << t1.data << endl;
    cout << test::T::RECT << endl;
    return 0;
}
