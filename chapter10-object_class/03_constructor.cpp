#include <iostream>
#include "03_constructor.h"

MyClass::MyClass()
{
	name = "defaultName";
	id = -1;
}

//MyClass::MyClass(int m_id,const std::string & m_name)
//{
//	id = m_id; name = m_name;
//}

std::string MyClass::getName()
{
	return name;
}

using namespace std;
int main()
{
	using namespace std;
	// 无构造函数
	//MyClass m;
	//MyClass m1 = MyClass();
	//MyClass * m2 = new MyClass();
	//delete m2;
	
	// 有构造函数
	// MyClass m; error
	// MyClass m = MyClass(1,"zhangsan");
	// MyClass m1(2,"lisi");
	// MyClass  * m2 = new MyClass(3,"wangwu");
	// cout << m.getName() << endl;
	// cout << m1.getName() << endl;
	// cout << m2->getName() << endl;
	// delete m2;

	MyClass m3;
	cout << m3.getName() << endl;;
	return 0;
}
