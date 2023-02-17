#include <iostream>
#include <string>
using std::cout;
using std::endl;

class Aminal
{
    private:
        char * name;
    public:
       Aminal(const char * name);
       Aminal(const Aminal & a);
       Aminal & operator=(const Aminal & a);
       virtual ~Aminal();
       virtual void show();
       friend std::ostream & operator<<(std::ostream & os,const Aminal & a);
};

class Cat : public Aminal
{
    private:
        std::string fullName;
    public:
        Cat(const std::string & s);
        Cat(const char * s);
        Cat(const Cat & cat);
        Cat & operator=(const Cat & cat);
        ~Cat(){};
        void show();
        friend std::ostream & operator<<(std::ostream & os,const Cat & a);
};