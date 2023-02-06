#include <iostream>
using namespace std;

struct Car {
  string make;
  int year;
};

int main()
{
  int count;
  cout << "How many cars do you wish to catalog? ";
  cin >> count;
  Car* cars = new Car[count] ;
  for (int i = 1; i <= count ; ++i)
  {
    string make; int year;
    cout << "\nCar#"<< i << endl;
    cout << "Please enter the make: ";
    // 这一行读取掉 13  24 行读取数字留下的换行符
    cin.get();
    getline(cin,make);
    cout << "Please enter the year made: ";
    cin >> year;
    cars[i-1] = {make,year};
  }

  cout << "\nHere is your collection:" << endl;
  for (int i = 1; i <= count; ++ i)
  {
    cout << "\tmake:" << (cars + i - 1)->make << "\tyear:" <<  cars[i-1].year << endl;
  }
  delete [] cars;
  return 0;
}
 
