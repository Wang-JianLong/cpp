#include <iostream>

typedef const double * (*FUN_PTR[3])(const int*,int);

using namespace std;

const double * f1(const int * array,int size);
const double * f2(const int array[],int size);
const double * f3(const int [],int size);

int main()
{
  // 单个指针函数
  const double * (*pf)(const int*,int);
  pf = f1;
  pf = f2;
  pf = f3;
  cout << (*pf)(NULL,1) << endl;

  // 或者 auto 只能单值初始化 无法初始化列表
  auto pf1 = f1;
  cout << (*pf1)(NULL,1) << endl;

  // 指针函数数组 先读 数组 再读指针函数  [] 比 * 优先级高
  const double * (*pfs[3])(const int* ,int) = {f1,f2,f3};
  
  FUN_PTR fun_ptr = {f1,f2,f3};

  // 创建一个指向函数指针数组的指针
  // 简单 在名字部分指明它是一个指针即可  考虑优先kkkk级 加上括号
  const double * (*(*pfsp)[3])(const int* ,int) = &pfs;
  // 或者
  // auto
  cout << pfsp << endl;
  return 0;
}


const double * f1(const int * array,int size){
  double * d = new double;
  return d; 
}


const double * f2(const int * array,int size){
  double * d = new double;
  return d; 
}

const double * f3(const int * array,int size){
  double * d = new double;
  return d; 
}
