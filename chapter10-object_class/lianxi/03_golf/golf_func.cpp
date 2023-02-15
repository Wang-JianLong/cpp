#include <cstring>
#include <iostream>
#include "golf.h"

golf::golf(const char * name,int hc)
{
	strcpy(fullname,name);
	handicap = hc;
}

void golf::setgolf(golf & g)
{
	*this = g;
}


void golf::show()
{
	using std::cout;
	using std::endl;
	cout << fullname << ": " << handicap << endl;
}
