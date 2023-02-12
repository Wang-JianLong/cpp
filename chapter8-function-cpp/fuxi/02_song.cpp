#include <iostream>
void song(const char * name = "O.My Papa",int times = 1);

int main()
{
    song("counting start",3);
    return 0;
}


void song(const char * name,int times)
{
   using namespace std; 
   cout << name << "\t" << times << endl;
}
    


