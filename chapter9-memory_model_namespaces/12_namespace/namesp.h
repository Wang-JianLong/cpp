#ifndef NAME_SP_H
#define NAME_SP_H	
#include <string>
namespace pers 
{
	struct Person 
	{
		std::string fname;
		std::string lname;
	};
	void get_person(Person &);
	void show_person(const Person &);
};

namespace debts
{
	using namespace pers;
	struct Debt 
	{
		Person name;
		double amount;
	};

	void set_debt(Debt &);
	void show_debt(Debt &);
	double sum_debts(const Debt ar[],int n);
};
#endif
