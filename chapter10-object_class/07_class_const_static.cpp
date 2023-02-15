#include <iostream>
using namespace std;
// 1 
// const int Max = 10;

class Temp
{
	private:
		// error 在创建对象前 没有共其使用的空间
		// const int Max = 10;
		// 2 声明枚举并不会创建类数据成员 所有对象都不包括枚举 只是一个符号名称 作用域为类 编译时替换数字
		// enum {Max = 10};

		static const int Max = 10;
		// 3 静态变量存储区
		double ds[Max];
};

int main()
{

	return 0;
}
