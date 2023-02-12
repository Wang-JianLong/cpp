#include "const_h.h"
#include <iostream>

// 需要覆盖掉const的默认内部链接性
extern const char x = '#';

void print()
{
    std::cout << "b " << a << std::endl;
}
