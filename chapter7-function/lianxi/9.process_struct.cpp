#include <iostream>
using namespace std;

const int SLEN = 30;
struct student {
  char fullname[SLEN];
  char hobody[SLEN];
  int ooplevel;
};

int getinfo(student[],int);
void display1(student s);
void display2(const student *);
void display3(const student[],int);

int main()
{
  cout << "Enter class size:"; 
  int class_size;
  cin  >> class_size;
  while(cin.get() != '\n')
    continue;

  student * ptr_stu = new student[class_size];
  int entered = getinfo(ptr_stu,class_size);

  for (int i(0); i < entered; ++i)
  {
    display1(ptr_stu[i]);
    display2(&ptr_stu[i]);
  }

  display3(ptr_stu,entered);
  delete [] ptr_stu;
  cout << "Done" << endl;
  return 0;
}


int getinfo(student ss[],int size)
{
  return 0;
}

void display1(student s)
{

}

void display2(const student * ptr_stu)
{

}

void display3(const student ptr_stu[] ,int size)
{

}
