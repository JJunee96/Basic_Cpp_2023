#include <iostream>
using namespace std;

class Mycal {
private:
	int num1;
	int num2;
public:
	Mycal(int x, int y);
	void add();
	void sub();
	void mul();
	void div();
};

Mycal::Mycal(int x, int y):num1(x),num2(y)
{
	cout << "생성자 호출" << endl;
}

void Mycal::add()
{
	cout << num1 + num2 << endl;
}

void Mycal::sub()
{
	cout << num1 - num2 << endl;
}

void Mycal::mul()
{
	cout << num1 * num2 << endl;
}

void Mycal::div()
{
	cout << double(num1) / double(num2) << endl;
}

int main()
{
	Mycal mc(2, 3);
	mc.add();
	mc.sub();
	mc.mul();
	mc.div();

	return 0;
}

