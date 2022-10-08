#pragma once
#include "timePL.h"
#include "car.h"
#include <sstream>
#include <iostream>
using namespace std;

class payment {
private:
	car** c;
	timePL** entryTime;
	timePL** exitTime;
	int hourPrice;
	double totalPayemnt;
public:
	payment();
	payment(int, int, car**);
	void setCarPayment(car**);
	void setEntryTime(timePL**);
	void setExitTime(timePL**);
	void setHourPrice(int);
	timePL** getEntryTime();
	timePL** getExitTime();
	int getHourPrice();
	double getTotalPayment();
	double calcTotalPayment(int, int);
	string toString();
};
