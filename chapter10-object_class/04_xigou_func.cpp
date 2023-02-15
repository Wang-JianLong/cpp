#include <iostream>
#include <string>

using namespace std;

class Deceased 
{
	private:
		string	name;	
		int	age;
	public:
		Deceased(const string & m_name,int m_age);
		~Deceased();
    void get() const;
};

Deceased::Deceased(const string & m_name,int m_age)
{
	name = m_name;
	age = m_age;
}

Deceased::~Deceased()
{
	cout << name << " died at the age of " << age << endl;
}

void Deceased::get() const
{
  cout << name << endl;
}

int main()
{
	// Deceased d = Deceased("zhangsan",90);
	Deceased * d = new Deceased("lisi",100);
	delete d;

	// 列表初始化
	Deceased dd  {"wangwu",2};
	Deceased * ddd = new Deceased{"wanger",99};
	cout << "Main..." << endl;
	delete ddd;
	return 0;

}
