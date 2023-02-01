#include <iostream>

// 函数原型 指出涉及的类型
void print(void);

int main()
{
	print();
	return 0;
}

void print(void) // 函数头
{
	// 函数体
	std::cout << "function object" << std::endl;
}
