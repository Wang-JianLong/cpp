#include <iostream>
#include <cstring>
#include "01_string/stringbad.h"
using namespace std;

const StringBad ss = "1234";

const StringBad & func(const StringBad & s)
{
    return s;
}


#include "03_queue/queue.h"
int main()
{
    //StringBad s0 = "hello";
    //StringBad s1 = "Hello";
    //StringBad s2 = "hello";
    //cout << (s0 == s1) << endl; 
    //cout << (s0 == s2) << endl; 
    //cout << (s2 > s1) << endl; 
    //cout << s1[1] << endl;
    //s2[1] = 'a';
    //cout << s2 << endl;

    //cout << ss[2] <<endl;
    //cout << "count = " <<StringBad::HowMany() <<endl;
    StringBad a = "abc";
    func(a);
    char * s1 = "123456";
    char name[3];
    std::strcpy(name,s1);
    cout << name << endl;
    return 0;
}
