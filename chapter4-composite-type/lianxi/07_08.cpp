#include <iostream>
#include <string>

int main(int argc, char *argv[]) {

  using namespace std;

  struct Pizza {
    string name;
    double diameter;
    double weight;
  };

  Pizza *p = new Pizza;
  std::cout << "请输入披萨公司名称：";
  getline(cin, p->name);
  std::cout << "请输入披萨公司重量：";
  cin >> p->weight;
  std::cout << "请输入披萨公司直径：";
  cin >> p->diameter;

  std::cout << "Pizza:\n"
            << "\tname:" << p->name << "\tdiameter:" << p->diameter
            << "\tweight:" << p->weight << std::endl;
  delete p;
  return 0;
}
