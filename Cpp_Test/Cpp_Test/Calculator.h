// author Á¶¿øÁØ
#pragma once
#ifndef __CALCULATOR_H_
#define __CALCULATOR_H_

class Calc
{
private:
	double x;
	char cper;
	double y;
public:
	double Calculate(double x = 0, char cper=NULL, double y=0);
};

#endif