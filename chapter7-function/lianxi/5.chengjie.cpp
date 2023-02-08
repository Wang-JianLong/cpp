#include <iostream>
using namespace std;

void read_number(int * number);
long double cal_factorial(int number);
int main()
{
  cout << " Please enter a number and the program will calculate its factorial."<< endl;
  cout << " : ";
  int number;
  read_number(&number);
  cout << "The factorial of "<< number<<" is " << cal_factorial(number) << endl;
  return 0;
}

long double cal_factorial(int number)
{
  if (number == 1) 
    return number;
  return number * cal_factorial(number - 1); 
}

void read_number(int * number)
{
  while(!(cin >> *number))
  {
    cin.clear();
    while(cin.get() != '\n');
    cout << "Please enter the correct number:";
  }
}



