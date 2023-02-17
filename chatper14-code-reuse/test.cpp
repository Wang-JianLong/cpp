#include <iostream>
#include <valarray>

int main(int argc, char const *argv[])
{    
    std::valarray<double> v(10,12);
    int i;
    for (i = 0; i < v.size(); ++i)
        std::cout << v[i] << std::endl;
    std::cout << i << std::endl;
    return 0;
}
