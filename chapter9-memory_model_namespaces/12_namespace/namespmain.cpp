#include "namesp.h"
int main()
{
	using namespace debts;	
	Debt debt = {{"Java","CPP"},10000};
	set_debt(debt);
	show_debt(debt);
	return 0;
}
