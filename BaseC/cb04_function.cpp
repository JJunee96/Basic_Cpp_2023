#include <iostream>

void func(void)	// 함수 생성 (입력과 출력이 없는)
{
	int a = 10;
	int b = 20;
	int res;
	res = a + b;
	std::cout << "res : " << res << std::endl;
}

void func2(int n1, int n2)		// 함수 생성 (입력을 만드는 방법 : (매개)변수를 선언)
{
	int res = n1 + n2;
	std::cout << "res : " << res << std::endl;
}

int func3(int n1, int n2);			// 함수 선언

int func3(int n1, int n2)			// 함수 생성 (입력과 출력이 있는 함수) :: 함수 정의
{
	int res = n1 + n2;
	return res;							// 출력은 return문으로 작성한다
}

int main()
{
	func();			// 함수호출

	int num1 = 10;
	int num2 = 20;

	func2(num1, num2);		// 입력으로 전달해주는 놈을 실인수(num1, num2)

	int res = func3(num1, num2);		// 리턴되는값을 저장해서 사용해야함
	std::cout << "res : " << res << std::endl;

	
	return 0;

 }