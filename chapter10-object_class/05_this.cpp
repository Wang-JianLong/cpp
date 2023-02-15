#include <iostream>
using namespace std;
// this is Object self pointer;
class User
{
	private:
		string name;
	public:
		User();
		User(string name);
		string getName() const;
		void setName(string name);
		User * clone();
};

User::User(){}
User::User(string name)
{
	this-> name = name;
}

string User::getName() const
{
	return (*this).name;
}

void User::setName(string name)
{
	this -> name = name;
}

User * User::clone()
{
	return this;
}

int main()
{
	User *u1 = new User("zhangsan");
	cout << u1->getName()<< endl;
	u1->setName("lisi");
	cout << u1->getName()<< endl;
	cout << (u1 == u1->clone()) << endl;
	delete u1;
	return 0;
}
