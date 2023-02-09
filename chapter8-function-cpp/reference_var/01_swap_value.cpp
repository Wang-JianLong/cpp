#include <iostream>

void swap_of_pointer(int*,int*);
void swap_of_reference(int&,int&);

int main()
{
    using namespace std;
    int i = 100, j = 1;
    //swap_of_pointer(&j,&i);
    swap_of_reference(j,i);
    cout << "swap.. i = "<< i << "\tj = " << j << endl;
    return 0;
}

void swap_of_pointer(int* x,int* y)
{
     int tmp = *x;
     *x = *y;
     *y = tmp;
}
void swap_of_reference(int & x,int & y)
{
    int tmp = x;
    x = y;
    y = tmp;
}
