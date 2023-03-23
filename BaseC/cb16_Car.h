#pragma once

#ifndef __CAR_H__			// 중복 컴파일 방지하기위한 구문
#define __CAR_H__

namespace CAR_CONST
{
	enum
	{
		ID_LEN=20, MAX_SPD = 200, FUEL_STEP = 2,
		ACC_STEP=10, BRK_STEP=10
	};
}

class Car
{
private:
	char gamerID[CAR_CONST::ID_LEN];
	int fuelGauge;
	int curSpeed;
public:
	void InitMembers(const char* ID, int fuel);
	void ShowCarState();
	void Accel();
	void Break();
};

#endif								// ifndef 세트