// author ������
#include <iostream>
#include "Calculator.h"
#include <conio.h>
using namespace std;

int main()
{
	printf("���� ��(ver 1.0)\n");
	printf("������ �ۼ��ϼ���. (ex : a+b | a-b | a*b | a/b )\n");
	printf("���� �����Ϸ��� ctrl + c �� ��������.\n");

	Calc result;
	while (true)
	{
		if (_getch() == 3)
		{
			return 0;
		}
		cout << "���� �Է� >> ";
		double ax;
		double ay;
		char acper;

		cin >> ax >> acper >> ay;
		cout << "��� = " << result.Calculate(ax, acper, ay) << endl;

		
	}
	return 0;
}