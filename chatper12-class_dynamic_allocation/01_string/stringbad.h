#ifndef _STRING_BAD_H_
#define _STRING_BAD_H_
#include <iostream>
/* 
  自动提供的成员函数：
   * 默认构造
   * 默认析构
   * 复制构造函数
       typename(const typename &);
       创建一个对象并将其初始化为现有对象时 包括函数的值传参与值返回
 
   * 赋值运算符
       ClassName & ClassName::operator=(const ClassName &)
       将已有的对象赋值给另一个对象时 
       初始化时 不一定会使用赋值运算符 (ClassName object(...);)
       赋值运算符的隐式实现也是对成员进行逐个进行复制（浅拷贝） 
       j
   * 地址运算符
*/
class StringBad
{
  private:
    char * str;
    int len;
    // 此时并不会分配内存 
    static int num_strings;
    const static int i = 0;
  public:
    // 因为默认复制构造函数是浅拷贝 这里显示写清楚并且实现为深拷贝[
    StringBad(const StringBad & s);
    StringBad(const char * s);
    StringBad();
    ~StringBad();
    // 赋值运算符默认逐个浅拷贝
    StringBad & operator=(const StringBad & s);
    char& operator[](int i);
    // 应对常量访问
    const char & operator[](int i) const;
    //  静态成员函数只能访问静态成员变量 StringBad::HowMany();
    static int HowMany();
    // 提高c风格字符串直接赋值的效率 不写的话  会经过 创建StringBad对象（StringBad(const char *)) 赋值临时变量(复制构造函数） 删除临时变量(析构函数） 的过程 ‘
    StringBad & operator=(const char *);
    friend bool operator==(const StringBad &s1,const StringBad &s2);
    friend bool operator>(const StringBad &s1,const StringBad &s2);
    friend bool operator<(const StringBad &s1,const StringBad &s2);
    friend std::ostream & operator<<(std::ostream & os,const StringBad & s);
};

#endif
