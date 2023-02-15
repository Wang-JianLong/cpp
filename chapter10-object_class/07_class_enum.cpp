#include <iostream>

// error
// enum one {A, B, C};
// enum two {D, B, C};

enum class one {A, B, C};
enum class two {D, B, C};

// 指定底层整形类型
// enum class :int three {F, B, C};

int main()
{
	using namespace std;
	// 无法隐式转换 
	// cout << one::B << endl;
	// cout << two::B << endl;

	cout << int(one::B) << endl;// 1
	cout << int(two::B) << endl;// 1

	// cout << int(three::B) << endl;
	return 0;
}
