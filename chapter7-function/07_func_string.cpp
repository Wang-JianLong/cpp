#include <iostream>

using namespace std;

string get_hello();
string* get_list();
void get_num(int *);
void show_list(string*,int);
string get_fujia(string s);

int Max = 0;

int main()
{
  cout << get_hello() << endl;
  string* list = get_list();
  show_list(list,Max);
  delete [] list;
  return 0;
}

string get_hello() 
{
  string h = "hello";
  return h;
}

string * get_list()
{
  cout << "请输入聚会人数:";
  int num;
  get_num(&num);
  Max = num;
  string * list = new string[num];
  for (int i = 0; i < num; i++)
  {
    cout << "list#" << i+1 << ":";
    getline(cin,list[i]);
  }
  return list;
}

void get_num(int *i)
{
  while(!(cin >> *i))
  {
    cin.clear();
    while (cin.get() != '\n')
    {
      continue;
    }
    cout << "请输入正确的数字:";
  }
  cin.get(); // get buffer \n
}

void show_list(string* list,int size)
{
  cout << "宾客姓名列表:"<< endl;
  for(int i = 0; i < size ; ++i)
  {
    cout << get_fujia(*(list+i))<< endl;
  }
}

string get_fujia(string s)
{
  return "\"" + s + "\"";
}
