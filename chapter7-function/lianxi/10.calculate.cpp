#include <iostream>
using namespace std;

typedef double (*CAL)(double,double);

double calculate(double,double,double (*)(double,double));
double add(double x,double y);
double sub(double x,double y);
double mult(double x,double y);
double get_double();

int main()
{
  CAL cal[3] = {add,sub,mult};
  cout << "Please enter two numbers Here will calculate their addition, subtraction, and product values"<<endl;
  cout << "If you want to exit please set the second number to 0;" << endl;
  while(1)
  {
    cout << "number@1: ";
    double n1 = get_double();
    cout << "number@2: ";
    double n2 = get_double();
    if(n2 == 0) 
      break;
    for (int i(0); i < 3; ++i)
    {
      cout << "\t" << calculate(n1,n2,cal[i]);;
    }
    cout << endl;
  }

  cout << "Done !!!" << endl;
  return 0;
}


double calculate(double a,double b,double (*pf)(double,double))
{
  return (*pf)(a,b);
}


double add(double x,double y)
{
  return x + y;
}


double sub(double x,double y)
{
  return x - y;
}

double mult(double x,double y)
{
  return x * y;
}


double get_double()
{
  double tmp;
  while(!(cin >> tmp))
  {
    cin.clear();
    while(cin.get() != '\n');
    cout << "Please enter the correct number:";
  }
  cin.get();

  return tmp;
}
