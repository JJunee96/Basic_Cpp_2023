// author Á¶¿øÁØ
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include "Calculator.h"
using namespace std;

double Calc::Calculate(double fstNum, char sign, double secNum)
{
	x = fstNum;
	y = secNum;
	cper = sign;

	if (cper == '+')
		return x + y;
	else if (cper == '-')
		return x - y;
	else if (cper == '*')
		return x * y;
	else if (cper == '/')
		return x / y;
	else
		return 0;
}