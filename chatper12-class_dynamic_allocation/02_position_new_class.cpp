#include <iostream>
#include <new>

using namespace std;
const int BUF = 1024;

class JustTest
{
  private:
    string name;
  public:
    JustTest(const string & s)
    {
      name = s;
    }
    ~JustTest()
    {
      cout << name << ": die" << endl;
    }
};

int main()
{
  char * buffer = new char[BUF]; 

  JustTest * j1 = new (buffer) JustTest("Jack");
  JustTest * j2 = new (buffer + sizeof(JustTest)) JustTest("Lois");
  
  cout << j1 << endl;
  cout << j2 << endl;
  // 根据位置的顺序  反顺序删除 再释放两个定位new出来所依赖的内存空间
  j2->~JustTest();
  j1->~JustTest();

  delete[] buffer;
  return 0;
}

