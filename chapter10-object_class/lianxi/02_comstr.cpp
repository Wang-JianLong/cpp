#include <iostream>
#include <cstring>
using namespace std;

class Person 
{
	private:
		static const int LIMIT = 25;
		string lname;
		char fname[LIMIT];
	public:
		Person()
		{
			lname = ""; 
			fname[0] = '\0';
		}
		Person(const string & ln, const char * fn = "Heyyou");
		void show() const;
		void FormalShow() const; 

};


Person::Person(const string & ln, const char * fn)
{
	this-> lname = ln;
	strcpy(this->fname,fn);	
}


void Person::show() const
{
	cout << (*this).fname << "." << (*this).lname << endl;
}

void Person::FormalShow() const 
{
	cout << this->fname << "," << this-> lname << endl;
}

int main()
{
	Person p1;	
	Person p2("KKK");	
	Person p3("ddd","aaa");	
	p2.show();
	p3.show();
	p2.FormalShow();
	return 0;
}
