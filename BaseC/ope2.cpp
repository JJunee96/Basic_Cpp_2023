#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Myclass {
private:
	int value;
public:
	Myclass(int avalue) : value(avalue) {}
	Myclass operator+(Myclass & other) const {						// 객체를 매개변수에 넣고 사용할땐 참조자로 써야함
		return Myclass(value + other.value);
	}
	void print() {
		cout << value << endl;
	}
};

int main()
{
	Myclass a(10);
	a.print();

	Myclass b(a);
	b.print();

	Myclass c = b;
	c.print();

	Myclass d = a + b + c;
	d.print();
	return 0;
}