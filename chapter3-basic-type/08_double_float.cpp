#include <iostream>
#include <cfloat>

int main() {
  double b = 3.5E6; // 至少48位
  float f = 1.0f; //  至少32位
  long double ld = 10E10L;
  // 不让e显示
  // std::cout.setf(std::ios_base::fixed,std::ios_base::floatfield);
  // std::cout << std::dec << b << std::endl;
  std::cout << f << std::endl;
  std::cout << ld << std::endl;
  // 有效位
  std::cout << FLT_DIG << std::endl; // 6
  std::cout << DBL_DIG << std::endl; // 15 
  std::cout << LDBL_DIG << std::endl; // 18
  double a = 10.0/3;
  float a1 = (float)10/3;
  long double a2 = (long double)10/3;
  std::cout << a << std::endl;
  std::cout << a1 << std::endl;
  std::cout << a2 << std::endl;

  std::cout << "sizeof double " << sizeof(double) << std::endl;
  std::cout << "sizeof float" <<sizeof(float)<< std::endl;
  std::cout << "sizeof long double" << sizeof(long double)<< std::endl;
  return 0;
}
