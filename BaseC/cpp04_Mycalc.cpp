#include<iostream>
using namespace std;
class Mycalc
{
private:
	int num1;
	int num2;
public:
	Mycalc();
	Mycalc(int n1, int n2);
	int add();
	int sub();
	int mul();
	double div();
};
Mycalc::Mycalc()
{
	cout << "생성자 호출" << endl;
}
Mycalc::Mycalc(int n1, int n2):num1(n1),num2(n2)
{
	cout << "매개변수 있는 생성자 호출 "  << n1 << "," << n2 << endl;
}
int Mycalc::add()
{
	return num1 + num2;
}
int Mycalc::sub()
{
	return num1 - num2;
}
int Mycalc::mul()
{
	return num1 * num2;
}
double Mycalc::div()
{
	return double(num1) / double(num2);
}
int main()
{
	Mycalc c;			// Mycalc c() : 함수 원형 상태일뿐 함수 호출되지 않음
	Mycalc d(2, 3);		// 기본생성자를 호출 하려면 Mycalc c 로 변경
	cout << d.add() << endl;
	cout << d.sub() << endl;
	cout << d.mul() << endl;
	cout << d.div() << endl;
	return 0;
}