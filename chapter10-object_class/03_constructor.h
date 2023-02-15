#ifndef _03
#define _03
#include <string>
class MyClass
{
	private:
		int id;
		std::string name;
	public:
		MyClass();
		//MyClass(int id,const std::string & m_name);
		std::string getName();
};
#endif

