#include <cstring>
#include <iostream>
#include "stringbad.h"
using std::cout;
using std::endl;

// 不能在类中初始化静态成员变量 声明了描述如何分配内存，但是并不分配内存 在类声明之外的地方单独初始化
// 静态成员是单独存储的不是对象的组成部分
// 初始化类静态成员
// 注意指出了作用域 类型 但是没有指明关键字static
// 主要原因是因为 类在头文件中 多个文件引用程序可能出现多个初始化副本引发错误
// 静态数据成员在类中声明，在包含类方法文件中初始化，初始化时使用作用域运算符来指出静态成员所属的类。但如果静态成员是const修饰，或者是枚举的话 则没有必要
int StringBad::num_strings = 0; 

StringBad::StringBad(const StringBad & s)
{
    len = strlen(s.str);
    str = new char[len + 1];
    std::strcpy(str,s.str);
    num_strings++;
    cout <<  num_strings << " :\"" << str << "\" object created\n";
}

StringBad::StringBad(const char * s)
{
  len = strlen(s);
  str = new char[len + 1];
  std::strcpy(str,s);
  num_strings++;
  cout <<  num_strings << " :\"" << str << "\" object created\n";
}

StringBad::StringBad()
{
  //len = 4;
  //str = new char [4];
  //std::strcpy(str,"C++"); 
  //cout << num_strings << ":\"" << str << "\" default object created\n";
    len = 0;
    str = new char[1];
    // 或者 str = 0 指向空指针 C语言关键字 NULL cpp关键字nullptr
    str[o] = '\0';
}


StringBad::~StringBad()
{
  cout << "\"" << str << "\" object delete,";
  -- num_strings;
  delete [] str;
  cout << num_strings << " left\n";
}

// 函数应该 返回一个调用对象的指针 因为 StringBad target = source; 这里调用者为target
// 这个函数里 target 是this, 而参数就是 source
// 赋值运算符只能类成员函数重载
StringBad & StringBad::operator=(const StringBad & s)
{
    if(&s == this) // 判断是否是自身
        return *this;
    delete [] str; // free old str
    
    len = strlen(s.str);
    str = new char[len + 1];
    // 赋值操作不创建新的StringBad 对象 没有必要计数加一 和输出
    std::strcpy(str,s.str);
    return *this;
}


std::ostream & operator<<(std::ostream & os,const StringBad & s)
{
  os << s.str;
  return os;
}

