#include <iostream>

class C
{
    private:
        int data;
    public:
        C(int i);
        friend std::ostream & operator<<(std::ostream & os, const C & c);
};

std::ostream & operator<<(std::ostream & os,const C & c) 
{
    os << &c << ": " << c.data;
    return os;
}

C::C(int i)
{
    data = i;
}


int main()
{
    C c1(100);    
    C c2(100);    
    C c3(100);    
    std::cout << c1 << "\t" << c2 << std::endl;
    return 0;
}
