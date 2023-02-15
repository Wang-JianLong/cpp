#include <iostream>
using namespace std;

class C 
{
	private:
		string name;
		int age;
	public:
		C(const string & name);
		const string & getName() const
		{
			return this->name;
		}
};
// constructor function not set rvalue; The function args append const;
C::C(const string & name)
{
	this->name = name;
	this->age = 0;
};

int main()
{
	string zhangsan = "zhangsan";	
	// C cs[4] = {
	// 	C(zhangsan),
	// 	C(zhangsan),
	// 	C(zhangsan),
	// 	C(zhangsan)
	// };

	C cs[4] = {
		C("zhangsan"),
		C("zhangsan"),
		C("zhangsan"),
		C("zhangsan")
	};
	for(int i{0}; i < 4; ++i)
		cout << cs[i].getName() << endl;
	 
	return 0;
}
