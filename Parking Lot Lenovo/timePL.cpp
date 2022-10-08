#include "timePL.h"
timePL::timePL() {
	hour = 0;
	minute = 0;
}
timePL::timePL(int hour, int minute) {
	this->hour = hour;
	this->minute = minute;
}
void timePL::setHour(int hour) {
	this->hour = hour;
}
void timePL::setMinute(int minute) {
	this->minute = minute;
}
int timePL::getHour() {
	return hour;
}
int timePL::getMinute() {
	return minute;
}
string timePL::toString() {
	stringstream ss;
	ss << hour << ":" << minute;
	return ss.str();
}
