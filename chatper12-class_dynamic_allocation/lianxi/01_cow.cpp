#include <iostream>
#include <cstring>

class Cow 
{
    // default private
    static const int NAME_LEN = 10;
    char name[NAME_LEN];
    char * hobby;
    double weigth;
    public:
        Cow();
        Cow(const char * nm,const char * ho, double wt);
        ~Cow();
        Cow(const Cow & c);
        Cow & operator=(const Cow & c);
        void showCow() const;
};

Cow::Cow()
{
    std::strcpy(name,"default_name");
    hobby = nullptr;
    weigth = -1;
}

Cow::Cow(const char * nm,const char * ho, double wt)
{
    int len = std::strlen(nm);
    if (len <= NAME_LEN)
        std::strcpy(name,nm);
    else
        std::strncpy(name,nm,NAME_LEN);
    hobby = new char[std::strlen(ho) + 1];
    std::strcpy(hobby,ho);
    weigth = wt;
}

Cow::~Cow()
{
    name[0] = '\0';
    weigth  = -1;
    delete[] hobby;
}


Cow::Cow(const Cow & c)
{
    std::strncpy(name,c.name,NAME_LEN);
    hobby = new char[std::strlen(c.hobby) + 1];
    std::strcpy(hobby,c.hobby);
    weigth = c.weigth;
}

Cow &  Cow::operator=(const Cow & c)
{
    if(&c == this)
        return *this;
    delete [] hobby;
    std::strncpy(name,c.name,NAME_LEN);
    hobby = new char[std::strlen(c.hobby) + 1];
    std::strcpy(hobby,c.hobby);
    weigth = c.weigth;
    return *this;
}

void Cow::showCow() const
{
    using std::cout;
    using std::endl;
    cout << "name:"<< name << " arddress: " << &name<<"\n";
    cout << "hobby:"<< hobby<< " arddress: " << &hobby<<"\n";
    cout << "weight:"<< weigth<< " arddress: " << &weigth <<endl;
}


int main(int argc, char const *argv[])
{
    Cow c1;
    Cow c2  = Cow("zhangsan","lazy",200.0);
    c2.showCow();
    c1 = c2;
    c1.showCow();
    return 0;
}
