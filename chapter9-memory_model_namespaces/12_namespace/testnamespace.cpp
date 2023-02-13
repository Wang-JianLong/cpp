#include <iostream>
namespace n1 
{
	int x = 1;
};

namespace n2
{
	 int x = 2;
};

int main()
{
	using namespace std;
	using namespace n1;
	cout << x << endl;
	{
		int x  = 4;
		cout << x << endl;
	}

	using n2::x;
	cout << x << endl;
	return 0;
}
