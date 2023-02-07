#include <iostream>
using namespace std;
struct square{
  unsigned int w;
  unsigned int h;
  unsigned int area;
};

void show(square* s);
square get_sq(unsigned int w,unsigned int h);
void cal(square* s);

int main()
{
  square  s = get_sq(100,100);
  cal(&s);
  show(&s);
  return 0;
}


square get_sq(unsigned int w,unsigned int h)
{
  square s = {.w = w,.h = h};
  return s; 
}

void cal(square* s)
{
  s->area = s->w * s->h;
}

void show(square* s)
{
  cout << "weight:" << s->w << "\theight:" << s->h << endl;
  cout << s->area << endl;
}
