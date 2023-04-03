// author 조원준
#include <iostream>
#include "Calculator.h"
#include <conio.h>
using namespace std;

int main()
{
	printf("계산기 앱(ver 1.0)\n");
	printf("계산식을 작성하세요. (ex : a+b | a-b | a*b | a/b )\n");
	printf("앱을 종료하려면 ctrl + c 를 누르세요.\n");

	Calc result;
	while (true)
	{
		if (_getch() == 3)
		{
			return 0;
		}
		cout << "계산식 입력 >> ";
		double ax;
		double ay;
		char acper;

		cin >> ax >> acper >> ay;
		cout << "결과 = " << result.Calculate(ax, acper, ay) << endl;

		
	}
	return 0;
}