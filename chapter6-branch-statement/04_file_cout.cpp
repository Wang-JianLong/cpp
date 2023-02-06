#include <iostream>
#include <fstream>

int main()
{
  using namespace std;
  ofstream file;
  file.open("wjl1.txt");

  file << "这是一段输出"<< endl;
  file << fixed;
  file.precision(2);
  file << double(1.99999)<< endl;
  file.close();
  return 0;
}
