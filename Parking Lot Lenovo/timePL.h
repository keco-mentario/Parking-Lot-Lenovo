#pragma once
#include <sstream>
#include <iostream>
using namespace std;

class timePL {
private:
	int hour;
	int minute;
public:
	timePL();
	timePL(int, int);
	void setHour(int);
	void setMinute(int);
	int getHour();
	int getMinute();
	string toString();
};
