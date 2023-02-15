#include <iostream>
#include "stack.h"
using namespace std;


Stack::Stack()
{
	top = 0;
}

bool Stack::isempty() const
{
	return top == 0;	
}

bool Stack::isfull() const
{
	return top == 10;
}

bool Stack::pop(double & count)
{
	if(top > 0)
	{
		Item t = ts[--top];
		count+= t.payment;
		return true;
	}
	return false;
}

bool Stack::push(const Item & item)
{
	if(top < Max)
	{
		ts[top++] = item;
		return true;
	}	
	return false;
}

int main()
{
	Stack s;	
	s.push({"nane",100});
	s.push({"nane",100});
	s.push({"nane",100});
	s.push({"nane",100});

	double count = 0;
	s.pop(count);
	s.pop(count);
	s.pop(count);
	s.pop(count);

	cout << count << endl;
	return 0;
}

