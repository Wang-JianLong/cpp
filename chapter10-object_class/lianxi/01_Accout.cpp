#include <iostream>
using namespace std;

class Accout 
{
	private:
		string name;
		string id;
		double amount;
	public:
		Accout(const string & namem,const string & id, double amount);
		void show() const;
		void add(double amount);
		void sub(double amount);
};

Accout::Accout(const string & name,const string & id, double amount)
{
	this->name = name;
	this->id = id;
	this->amount = amount;
}


void Accout::show() const
{
	cout << this-> name << "\n\tid: " << this-> id << "\tamount: " << amount << endl;
}
void Accout::add(double amount)
{
	this-> amount += amount;
}

void Accout::sub(double amount)
{
	this-> amount -= amount;
}

int main()
{
	Accout a = Accout("zhangsan","1123342432",10000.00);
	a.sub(50000);
	a.add(100);
	a.show();
	return 0;
}
