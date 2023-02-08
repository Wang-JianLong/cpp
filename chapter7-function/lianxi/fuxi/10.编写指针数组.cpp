#include <iostream>
using namespace std;


struct applicant {
  char name[30];
};

typedef const char* (*P_F)(const applicant *, const applicant *);

void f1(applicant *);
const char* f2(const applicant *, const applicant *);

int main()
{
  void (*p1)(applicant *) = f1;
  const char * (*p2)(const applicant *,const applicant *) = f2;
  
  P_F pf[10] = {f2,f2,f2,f2};

  return 0;
}



void f1(applicant *){}
const char* f2(const applicant *, const applicant *){
  char c = 'c';
  const char * ch = &c;
  return ch;
}
