// 定位new
#include <iostream>
#include <new>
using namespace std;

struct chaff{
    char dross[30];
    int slag;
};

char buffer1[500];
char buffer2[520];

int main()
{
    chaff *p1,*p2;    
    int *p3,*p4;

    p1 = new chaff;
    cout << "p1 " << p1 << endl;
    p3 = new int[20];
    cout << "p3 " << p3 << endl;

    cout << "buffer1 "<< (int*)&(buffer1[0]) << endl;
    cout << "buffer2 "<< (int*)&(buffer2[0])<< endl;

    p2 = new (buffer1) chaff;
    p4 = new (buffer2) int[30];
    cout << "p2 " << p2 << endl;
    cout << "p4 " << p4 << endl;

    delete p1;
    //delete p2;
    delete []p3;
    //delete []p4;
    return 0;
}
