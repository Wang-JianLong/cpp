#include <iostream>
template <typename T>
class Test
{
	private:
		T data;
	public:
		Test();
		void setData(const T &);
		void show();
};

template <typename T>
Test<T>::Test()
{
	//this->data = t;	
}

template <typename T>
void Test<T>::setData(const T & t)
{
	this->data = t;
}

template <typename T>
void Test<T>::show()
{
	using std::cout;
	using std::endl;
	cout << data << endl;
}

int main()
{
	using namespace std;
	Test<string> t = Test<string>();
	t.setData("abc");
	t.show();
	return 0;
}
