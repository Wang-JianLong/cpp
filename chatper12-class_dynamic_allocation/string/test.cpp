#include "string.h"

int main(int argc, char const *argv[])
{
    String s = "adffffs";
    s.StringLow();

    std::cout << s.char_cout('f') << std::endl;
    return 0;
}
