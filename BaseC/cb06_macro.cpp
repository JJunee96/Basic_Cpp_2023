#include <iostream>

// 매크로 함수
// 매크로 함수의 이점 : 실행속도가 빠르다, 자료형을 지정해줄 필요가 없다
// 매크로 함수의 단점 : 정확한 식을 지정해주지 않으면 다른 값이 나옴
#define SUM(x, y)	x + y		
#define SQLARE(x) x * x
#define SQLARE1(x) (x) * (x)

void func()
{

}

int main()
{
	std::cout << SUM(10.1, 20.2) << std::endl;
	//func();
	std::cout << SQLARE(10) << std::endl;			
	std::cout << SQLARE(10 + 1) << std::endl;	// 10 + 1 * 10 + 1 = 21
	std::cout << SQLARE1(10 + 1) << std::endl; // (10 + 1) * (10 + 1) = 121
	return 0;
}