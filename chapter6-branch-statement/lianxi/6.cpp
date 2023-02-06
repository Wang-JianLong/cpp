#include <iostream>
using namespace std;

struct Parton {
  string name;
  double donation;
};

void get_num(int *);
void get_num(double*);

int main()
{
  cout << "Please enter the number of donors:"; 
  int num; 
  get_num(&num);

  string name;
  double douation;

  Parton *ps = new Parton[num];

  for (int i = 0; i < num; i++)
  {
    cout << "\nPlease enter donor information @"<< i+1<< endl;
    cout << "\tname:";
    getline(cin,name);
    cout << "\tdouation:";
    get_num(&douation); 

    *(ps + i) = {name,douation};
  }

  for (int i = 0; i < num; i++)
  {
    if (ps[i].donation > 10000)
      cout << "Grand Paronts:\t";
    cout << "name:" << ps[i].name << "\tdouation:" << ps[i].donation<< endl;
  }
  delete [] ps;
  return 0;
}


void get_num(int* i)
{
  while(!(cin >> *i))
  { 
    cout << "Please enter a correct number:";
    cin.clear();
    while( cin.get() != '\n')
      continue;
  }
  cin.get();
}


void get_num(double* i)
{
  while(!(cin >> *i))
  { 
    cout << "Please enter the correct amount:";
    cin.clear();
    while( cin.get() != '\n')
      continue;
  }
  cin.get();
}
