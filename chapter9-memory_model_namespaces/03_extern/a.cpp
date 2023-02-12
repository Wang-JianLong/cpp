#include <iostream>
extern double waring;

void abc()
{
    using std::cout;
    using std::endl;
    double waring = 0;
    // :: 使用全局的意思
    cout << ::waring << endl;
}

int main()
{
    using namespace std;
    cout << waring << endl;
    abc();
    return 0;
}
