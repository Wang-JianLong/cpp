#include <iostream>

int main()
{
		int i1 = 0;
		// c++独有
		int i2 = {11};
		int i3{13};
		int i4(14);
		// 初始化为0
		int i5{};
		int i6 = {};
		using namespace std;
		cout << i1 <<endl;
		cout << i2 <<endl;
		cout << i3 <<endl;
		cout << i4 <<endl;
		cout << i5 <<endl;
		cout << i6 <<endl;
		return 0;
}
