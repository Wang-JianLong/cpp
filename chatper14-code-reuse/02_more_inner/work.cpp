#include "work.h"
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

Worker::~Worker() {}

void Worker::Set()
{
    cout << "Enter worker's name: ";
    getline(cin, fullName);
    cout << "Enter worker's id: ";
    cin >> id;
    while (cin.get() != '\n')
        continue;
}

void Worker::Show() const
{
    cout << "Name: " << fullName << "\n";
    cout << "Employes id: " << id << "\n";
}


void Waiter::Set()
{
    Worker::Set();
    cout << "Enter waiter's panache: ";
    cin >> panache;
    while (cin.get() != '\n')
        continue;
}
void Waiter::Show() const
{
    Worker::Show();
    cout << "Panache rating: " << panache << endl;
}

// 初始化私有静态成员变量

char * Singer::pv[] = {"other","alto","contralto","soprano","bass","baritone","tenor"};

void Singer::Set()
{
    Worker::Set();
    cout << "Enter number for singer's vocal range: \n";
    int i;
    for(int i = 0; i < Vtype; i++)
    {
        cout << i << ":" << pv[i] << " ";
        if (i % 4 == 3)
        {
            cout << endl;
        }
    }
    if (i % 4 != 0)
    {
        cout << endl;
    }

    while(cin>>voice && (voice < 0 || voice >= Vtype))
    {
        cout << "Plase enter a value >= 0 and < " << Vtype << endl;
    }

    while(cin.get() != '\n')
        continue;
}

void Singer::Show() const
{
    cout << "Category: singer\n";
    Worker::Show();
    cout << "Vocla range: " << pv[voice] << endl;
}