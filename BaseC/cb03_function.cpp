#include <iostream>

void func(void)	// �Լ� ���� (�Է°� ����� ����)
{
	int a = 10;
	int b = 20;
	int res;
	res = a + b;
	std::cout << "res : " << res << std::endl;
}

void func2(int n1, int n2)		// �Լ� ���� (�Է��� ����� ��� : (�Ű�)������ ����)
{
	int res = n1 + n2;
	std::cout << "res : " << res << std::endl;
}

int func3(int n1, int n2);			// �Լ� ����

int func3(int n1, int n2)			// �Լ� ���� (�Է°� ����� �ִ� �Լ�) :: �Լ� ����
{
	int res = n1 + n2;
	return res;							// ����� return������ �ۼ��Ѵ�
}

int main()
{
	func();			// �Լ�ȣ��

	int num1 = 10;
	int num2 = 20;

	func2(num1, num2);		// �Է����� �������ִ� ���� ���μ�(num1, num2)

	int res = func3(num1, num2);		// ���ϵǴ°��� �����ؼ� ����ؾ���
	std::cout << "res : " << res << std::endl;

	
	return 0;

 }