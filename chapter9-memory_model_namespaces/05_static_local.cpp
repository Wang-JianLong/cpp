#include <iostream>
using namespace std;
void printInt();

int main()/*{{{*/
{
    printInt();
    printInt();
    printInt();
    printInt();
    return 0;
}/*}}}*/

void printInt()
{
    static int i = 0;
    i ++;
    cout << i << endl;
}
