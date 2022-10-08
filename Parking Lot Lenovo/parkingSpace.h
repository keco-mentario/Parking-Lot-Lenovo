#pragma once
#include "car.h"

class parkingSpace {
private:
	int spaceNum, maxCarsPerDay;
	char state; // 'B' for busy, 'M' for maintenance, and 'F' for free
	car** c[10];
public:
	parkingSpace();
	void setSpaceNum(int);
	void setState(char);
	void setCar(car**, int);
	int getSpaceNum();
	char getState();
	car** getCar(int);
};