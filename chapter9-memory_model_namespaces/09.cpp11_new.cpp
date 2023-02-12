#include <iostream>
using namespace std;
struct where { int x;int y; double z;};

int main()
{
    int *ip = new int (50);
    int *ip2 = new int {2};
    int *array = new int[4] {1,2,3};
    where * w = new where {1,2,0.8}; 

    cout << "ip " << *ip<<endl;
    cout << "ip2 " << *ip2<<endl;
    cout << "array[2] " <<  array[2]<<endl;
    cout << "w->x " << w-> x<<endl;
    // 内存失败引发异常
    // std::bad_alloc a;
    // new -> void * operator(std::size_t);
    // new[] -> void * operator[](std::size_t);
    delete []array;
    delete w;
    delete ip;
    delete ip2;
    // delete -> void delete(void *);
    // delete -> void delete[](void *);
    return 0;
}

