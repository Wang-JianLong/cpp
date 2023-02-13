#include <iostream>
#include "namesp.h"

namespace pers
{
	using std::cout;
	using std::endl;
	using std::cin;
	void get_person(Person & p)
	{
		cout << "Enter first name:";
		cin >> p.fname; 
		cout << "Enter last name:";
		cin >> p.lname;
	}
	void show_person(const Person & p)
	{
		cout << p.fname << "." << p.lname << endl;
	}
};

namespace debts 
{
	void set_debt(Debt & d)
	{
		get_person(d.name);
		std::cout << "Enter Debt amount:";
		std::cin >> d.amount;
	}
	void show_debt(Debt & d)
	{
		show_person(d.name);
		cout << "amount: " << d.amount << endl;
	}
	double sum_debts(const Debt ar[],int n)
	{
		double total;
		for (int i = 0; i < n ; ++i)
			total += ar[i].amount;
		return total;	
	}
}

