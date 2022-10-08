#pragma once
#include "time.h"
#include "car.h"
#include <sstream>
#include <iostream>
using namespace std;

class payment {
private:
	car** c;
	time** entryTime;
	time** exitTime;
	int hourPrice;
	double totalPayemnt;
public:
	payment();
	payment(int, int, car**);
	void setCarPayment(car**);
	void setEntryTime(time**);
	void setExitTime(time**);
	void setHourPrice(int);
	time** getEntryTime();
	time** getExitTime();
	int getHourPrice();
	double getTotalPayment();
	double calcTotalPayment(int, int);
	string toString();
};