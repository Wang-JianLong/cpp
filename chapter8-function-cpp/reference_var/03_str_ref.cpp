#include <iostream>
// #include <string>
using namespace std;

struct free_throws {
    string name;
    int made;
    int attempta;
    float percent;
};

void display(const free_throws & ft);
void set_pc(free_throws & ft);
free_throws & accmulate(free_throws & target,const free_throws & source);

// 避免返回函数结束时不存在的临时引用 以下
// const  free_throws & clone(free_throws & ft){
//     free_throws & newguy = ft;
//     return newguy;
// }
// 避免返回函数结束后消亡的临时变量的指针


// ???
const free_throws & clone(free_throws & ft)
{
    free_throws * pt;
    *pt = ft;
    return  *pt; 
}

int main()
{
    // free_throws one = {"Ifelsa Branch",13 ,14 };
    // free_throws two = {"Andor Knott",10 ,16 };
    // free_throws three= {"Minnie Max",7 ,9 };
    // free_throws four= {"Whily Loper",5,9};
    // free_throws five = {"Long Long",6,14};
    // free_throws team = {"Throwgoods",0 ,0 };
    // 
    // free_throws dup;

    // set_pc(one);
    // display(one);
    // accmulate(team,one);
    // display(accmulate(team,two));
    // accmulate(accmulate(team,three),four);
    // display(team);
    // dup = accmulate(team,five);

    // cout  << "Display team: \n";
    // display(team);
    // cout <<  "Display dup after assignment:\n";

    // display(dup);
    // set_pc(four);
    // // 左边 由于返回值是传递进去的dup引用 
    // // 再赋值表达式中 左边必须是可修改的左值，也就是说
    // // 左边的子表达式必须明确标识一个可修改的内存块 而dup的引用 
    // // 它表示的就是一个这样的内存块
    // // 等价于  dup =  accmulate(dup,five);  dup = four;
    // accmulate(dup,five) = four;

    // cout << "Displaying dup after ill-advised assignment:\n";

    // display(dup);


    return 0;


}

void display(const free_throws & ft)
{
    cout << "Name:" << ft.name <<  endl;
    cout << "  Made:" << ft.made <<  endl;
    cout << "  Attempts:" << ft.attempta  <<  endl;
    cout << "  Percent:" << ft.percent <<  endl;
}

void set_pc(free_throws & ft)
{
    if (ft.attempta != 0)
        ft.percent = 100.0f * float(ft.made) / float(ft.attempta);
    else
        ft.percent = 0;
}

free_throws & accmulate(free_throws & target,const free_throws & source)
{
    target.attempta += source.attempta;
    target.made += source.made;
    set_pc(target);
    return target ;
}

