#ifndef _STRCK_

#define _STRCK_
struct customer
{
	char fullname[35];
	double payment;
};

typedef customer Item;
class Stack 
{
	private:
		enum {Max = 10};
		Item ts[Max];
		int top;
	public:
		Stack();
		bool isempty() const;
		bool isfull() const;
		bool pop(double & count);
		bool push(const Item & item);
};

#endif
