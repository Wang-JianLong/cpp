#include <iostream>

namespace wjl {
    int fetch = 100;
    using namespace std;
    namespace hsh{
        char symoal = 'a';
    };
    void print();
};

using namespace wjl;

namespace wjl 
{
	using std::cout;
	using std::endl;
	void print()
	{
		cout << "print" << endl;
	}
}
int fetch = 1;
int main()
{
    int fetch = 10;
    cout << wjl::fetch << endl;
    cout << hsh::symoal << endl;
    cout << ::fetch << endl;
    wjl::print();
    return 0;
}
