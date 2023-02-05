#include <iostream>

int main(int argc, char *argv[]) {
  using namespace std;
  string s1 = "Hello";
  string s2 = "Hello";
  std::cout << (s1 == s2) << std::endl;
  char *s3 = "Hello";
  std::cout << (s1 == s3) << std::endl;
  char s4[] = "Hello";
  std::cout << (s1 == s4) << std::endl;
  std::cout << "\0  123" << std::endl;
  return 0;
}
