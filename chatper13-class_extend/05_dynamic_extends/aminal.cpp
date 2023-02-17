#include <cstring>
#include "aminal.h"

Aminal::Aminal(const char *s)
{
    int len = strlen(s) + 1;
    name = new char[len];
    strcpy(name, s);
}

Aminal::Aminal(const Aminal &a)
{
    int len = strlen(a.name) + 1;
    name = new char[len];
    strcpy(name, a.name);
}

Aminal &Aminal::operator=(const Aminal &a)
{
    if (&a == this)
        return *this;
    delete[] name;
    name = new char[strlen(a.name) + 1];
    strcpy(name, a.name);
    return *this;
}

Aminal::~Aminal()
{
    delete[] name;
}

void Aminal::show()
{
    cout << "Aminal name : " << name << endl;
}

// ==============cat==============

Cat::Cat(const std::string &s) : Aminal(s.c_str())
{
    fullName = s;
}

Cat::Cat(const char *s) : Aminal(s)
{
    fullName = s;
}

Cat::Cat(const Cat &cat) : Aminal(cat) // 复制构造函数 负责基类
{
    fullName = cat.fullName;
}

Cat &Cat::operator=(const Cat &cat)
{
    Aminal::operator=(cat); // 赋值函数 负责基类
    Cat result(cat.fullName);
    return result;
}

void Cat::show()
{
    Aminal::show();
    cout << "cat name : " << fullName << endl;
}

std::ostream &operator<<(std::ostream &os, const Aminal &a)
{
    os << "{" << a.name << "}" << endl;
}

std::ostream &operator<<(std::ostream &os, const Cat &a)
{
    os << (const Aminal &)a;
    os << "{" << a.fullName << "}";
}