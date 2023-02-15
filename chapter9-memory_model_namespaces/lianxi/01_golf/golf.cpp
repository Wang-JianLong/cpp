#include <iostream>
#include <cstring>
#include "golf.h"
void setGolf(golf & g,const char * name,int han)
{
	strcpy(g.fullname,name);
	g.handicap = han;
}

int setGolf(golf & g)
{
	using std::endl;
	using std::cout;
	using std::cin;
	cout << " Enter golf name:";
	//strcpy(g.fullname,cin.get(100));	
	cin.get();
	cout << " Enter golf handicap:";
	cin >> g.handicap;
	return 0;
}

void handicap(golf & g, int he)
{
	
}
void showGolf(const golf & g)
{
	using std::endl;
	using std::cout;
	cout << "golf name:" << g.fullname << " handicap:" << g.handicap << endl;
}

int main()
{
	return 0;
}
