#pragma once
#include <sstream>
#include <iostream>
using namespace std;

class time {
private:
	int hour;
	int minute;
public:
	time();
	time(int, int);
	void setHour(int);
	void setMinute(int);
	int getHour();
	int getMinute();
	string toString();
};