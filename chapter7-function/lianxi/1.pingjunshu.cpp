#include <iostream>

double harmonic_mean(double x,double y);
void read_int(int *);
int main()
{
  using namespace std;

  int x,y; 
  while(1){
    cout << "nubmer@1:";
    read_int(&x);
    cout << "nubmer@2:";
    read_int(&y);
    if (x == 0 || y == 0)
    {
      break;
    }
    cout << "The reconciliation tie value is "<<harmonic_mean(x,y) << endl;
  }
  cout << "END!" << endl;
  return 0;
}

double harmonic_mean(double x,double y){
  return 2.0 * x * y / (x + y);
}

void read_int(int * d)
{
  while(!(std::cin >> *d))
  {
    std::cin.clear();
    while(std::cin.get() != '\n')
      continue;
    std::cout << "Please enter the correct number:";
  }
}

