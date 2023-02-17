#include "aminal.h"

int main(int argc, char const *argv[])
{
    Cat cat("tom");
    //cat.show();

    Aminal a = cat;
    //a.show();

    Cat c = cat;
    c.show();

    cout << a;
    cout << c;
    return 0;
}
