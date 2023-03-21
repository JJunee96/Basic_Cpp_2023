#include <iostream>

void func()
{
	//std::cout << "func()" << std::endl;
	printf("func()\n");
}

void func(int a)
{
	//std::cout << "func(a)" << std::endl;
	printf("func(a)\n");
}

void func(int a, int b)
{
	//std::cout << "func(a)" << std::endl;
	printf("func(a, b)\n");
}

void func(char a)
{
	//std::cout << "func(a)" << std::endl;
	printf("func(a)\n");
}

int func1(int a = 10, int b = 20)
{
	return a + b;
}

int main()
{
	int n = 10, n1 = 20;
	char ch = 'a';
	func();
	func(n);
	func(n, n1);
	func(ch);

	func1();
	func1(5);
	func1(5, 10);

	return 0;
}