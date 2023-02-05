#include <cstring>
#include <iostream>

int main(int argc, char *argv[]) {
  using namespace std;
  char word[] = "?ate";

  for (char ch = 'a'; strcmp(word, "mate"); ch++) {
    word[0] = ch;
    std::cout << ch << std::endl;
  }
  std::cout << strcmp("a", "A") << std::endl;
  std::cout << word << std::endl;
  return 0;
}
