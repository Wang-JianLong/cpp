#include <iostream>
#include <cstring>

using namespace std;

struct stringy {
    char *str;
    int ct;
};

void set(stringy & s,char * c);
void show(const stringy & s,int n = 0);
void show(const char * s,int n = 0);

int main() {
    stringy beany;
    char testing[] = "Reality isn't what it used to be.";

    set(beany, testing);
    show(beany);
    show(beany, 2);
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);
    show(testing, 3);
    show("Done!");

    return 0;
}

void set(stringy & s,char * c)
{
   strcpy(s.str,c);
   int len = strlen(c);
   s.ct = len;
}

void show(const stringy & s,int n)
{
   if(n < 0)
       return;
   for (int i = 0; i < n;++i)
   {
    cout << "ct " << s.ct << "  str " <<  s.str << endl;
   }
}


void show(const char * s,int n)
{
   if(n < 0)
       return;
   for (int i = 0; i < n;++i)
   {
    cout << s  << endl;
   }
}
