#include <iostream> 
using namespace std;

string version1(const string & s1,const string &s2);
const string & version2(string & s1,const string &s2);
const string & version3(string & s1,const string &s2);

int main()
{
    return 0;
}


string version1(const string & s1,const string &s2)
{
    // 返回值会复制赋值给调用方的string result = version1(...);
    string tmp;
    tmp = s2 + s1 +s2;
    return tmp;
}

const string &  version2(string & s1,const string &s2)
{
    s1 = s2 + s1 + s2;
    return s1;
}


// 如果程序崩溃 那么原因是 程序识图引用已经释放的内存
const string & version3(string & s1,const string &s2)
{
    string tmp;
    tmp = s2 +  s1 + s2;
    return tmp;
}
