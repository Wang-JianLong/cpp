#include <iostream>
using namespace std;
struct Candybar
{
    string name;
    double weight;
    int neat;
};

void add(Candybar & c,string name,double w,int n);
void print(const  Candybar & c);

int main()
{
    Candybar c;
    add(c,"lv",200.00,10);
    print(c);
    return 0;
}

void add(Candybar & c,string name,double w,int n)
{
    c.name = name;
    c.weight = w;
    c.neat = n;
}


void print(const  Candybar & c)
{
    cout << " name " << c.name << endl;
    cout << " weight " << c.weight<< endl;
    cout << " neat " << c.neat<< endl;
}
