#include <iostream>

int main(int argc, char *argv[]) {
  using namespace std;
  char ch;
  int count = 0;
  cin >> ch;
  // C-d
  //while (!cin.eof() || !cin.fail()) {
  // 如果最后一次的读取成功了
  //while (cin) {
  // cin内部有一个转换函数 当cin出现在需要bool的地方时 cin的函数就会被调用
  while(cin.get(ch)){
    // get方法返回的是cin对象
    cout << ch;
    count++;
    // 自动忽略回车和空格
    // cin >> ch;
    // 该函数会读取每一个字符
  }

  std::cout << "\n" << count << std::endl;
  return 0;
}
