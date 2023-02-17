#include "string.h"

int String::count_str = 0;

String::String()
{
    len = 0;
    str = nullptr; 
    count_str ++;
}

String::String(const char * s)
{
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str,s);
    count_str ++;
}


String::String(const String & s)
{
    len = s.len;
    str = new char[len + 1];
    std::strcpy(str,s.str);
    count_str ++;
}

String & String::operator=(const String & s)
{
    if (&s == this)
        return *this;
    delete [] str;// delete old str
    len = std::strlen(s.str);
    str = new char[len + 1];
    std::strcpy(str,s.str);
    return *this;
}


String & String::operator=(const char * s)
{
    // 记得删除旧数据
    delete [] str;
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str,s);
    count_str ++;
    return *this;
}

String::~String(){
    count_str--;
    delete [] str;
}
// 必须创建一个新的字符串
String String::operator+(const String & s)
{
    char * temp = new char [std::strlen(str) + 1 + std::strlen(s.str)];
    std::strcpy(temp,str);
    std::strcat(temp,s.str);
    String result(temp);
    delete [] temp;
    return result;
}

char & String::operator[](int i)
{
    return str[i];
}


const char & String::operator[](int i) const
{
    return str[i];
}


int String::length() const 
{
    return len;
}


int String::PoolCout()
{
    return count_str;
}


std::ostream & operator<<(std::ostream & os,const String & str)
{
    os << str.str;
    return os;
}

std::istream & operator>>(std::istream & is,String & str)
{
    char temp[1024];
    is.get(temp,1024);
    if (is)
        str = temp;
    while(is && is.get() != '\n')
        continue;
    return is;
}

bool operator==(const String & s1,const String & s2)
{
    return std::strcmp(s1.str,s2.str) == 0;
}

bool operator>(const String & s1,const String & s2)
{
    return std::strcmp(s1.str,s2.str) > 0;
}

bool operator<(const String & s1,const String & s2)
{
    return std::strcmp(s1.str,s2.str) < 0;
}

String operator+(const char * s,const String & str)
{
    char * tmp = new char[std::strlen(s) + 1 + std::strlen(str.str)];
    std::strcpy(tmp,s);
    std::strcat(tmp,str.str);
    String result(tmp);
    delete [] tmp;
    return result;
}