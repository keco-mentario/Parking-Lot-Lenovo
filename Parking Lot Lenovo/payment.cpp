#include "payment.h"

payment::payment() {
	c = NULL;
	entryTime = NULL;
	exitTime = NULL;
	hourPrice = 800;
	totalPayemnt = 0;
}
payment::payment(int hour, int min, car** c) {
	this->c = c;
	entryTime = NULL;
	(*entryTime)->setHour(hour);
	(*entryTime)->setMinute(min);
	exitTime = NULL;
	hourPrice = 800;
	totalPayemnt = 0;
}
void payment::setCarPayment(car** c) {
	this->c = c;
}
void payment::setEntryTime(timePL** entryTime) {
	this->entryTime = entryTime;
}
void payment::setExitTime(timePL** exitTime) {
	this->exitTime = exitTime;
}
void payment::setHourPrice(int hourPrice) {
	this->hourPrice = hourPrice;
}
timePL** payment::getEntryTime() {
	return entryTime;
}
timePL** payment::getExitTime() {
	return exitTime;
}
int payment::getHourPrice() {
	return hourPrice;
}
double payment::getTotalPayment() {
	return totalPayemnt;
}
double payment::calcTotalPayment(int exitTimeHour, int exitTimeMinute) {
	if (exitTimeHour > (*entryTime)->getHour()) {
		if ((*c)->getWeight() < 1.0) {
			totalPayemnt = (exitTimeHour - (*entryTime)->getHour()) * hourPrice;
			return totalPayemnt;
		}
		else if ((*c)->getWeight() >= 1.0 and (*c)->getWeight() <= 1.5) {
			totalPayemnt = (exitTimeHour - (*entryTime)->getHour()) * hourPrice;
			totalPayemnt = totalPayemnt + (totalPayemnt * 0.05);
			return totalPayemnt;
		}
		else if ((*c)->getWeight() >= 1.6 and (*c)->getWeight() <= 3.5) {
			totalPayemnt = (exitTimeHour - (*entryTime)->getHour()) * hourPrice;
			totalPayemnt = totalPayemnt + (totalPayemnt * 0.10);
			return totalPayemnt;
		}
		else if ((*c)->getWeight() >= 3.6 and (*c)->getWeight() <= 5.0) {
			totalPayemnt = (exitTimeHour - (*entryTime)->getHour()) * hourPrice;
			totalPayemnt = totalPayemnt + (totalPayemnt * 0.15);
			return totalPayemnt;
		}
		else {
			totalPayemnt = (exitTimeHour - (*entryTime)->getHour()) * hourPrice;
			totalPayemnt = totalPayemnt + (totalPayemnt * 0.20);
			return totalPayemnt;
		}
		
	} else {
		//cout << "Unexpected error calculating the price to pay" << endl;
		return 0;
	}
}
string payment::toString() {
	stringstream ss;

	return ss.str();
}
