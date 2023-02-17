#include <iostream>
using namespace std;

class Aminal
{
    protected:
        string name;
    public:
        virtual ~Aminal();
        virtual void run() = 0;
};

class Cat: public Aminal
{
    public:
        void run()
        {
            cout << name << endl;
        }
};

int main(int argc, char const *argv[])
{
    // Aminal a;
    // Aminal & aa  = Aminal();
    Cat c;
    Aminal & a = c;
    return 0;
}
