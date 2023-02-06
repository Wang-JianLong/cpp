#include <iostream>
using namespace std;
int main()
{
  int count;// count value 
  double daphne_deposit = 100;
  double cleo_deposit = 100;

  while (cleo_deposit <= daphne_deposit)
  {
    cleo_deposit += cleo_deposit * 0.1;
    daphne_deposit += 10;
    count++ ;
  }

  cout << "需要" << count << "年" << endl;
  return 0;
}
