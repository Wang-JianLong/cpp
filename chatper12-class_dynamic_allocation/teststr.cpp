#include <iostream>
#include <cstring>

int main(int argc, char const *argv[])
{
    using namespace std;
    char * s = "112123321";
    char name[3];
    strcpy(name,s);
    cout << name << endl;
    return 0;
}
