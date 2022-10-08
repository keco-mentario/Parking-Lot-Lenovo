#include "time.h"
time::time() {
	hour = 0;
	minute = 0;
}
time::time(int hour, int minute) {
	this->hour = hour;
	this->minute = minute;
}
void time::setHour(int hour) {
	this->hour = hour;
}
void time::setMinute(int minute) {
	this->minute = minute;
}
int time::getHour() {
	return hour;
}
int time::getMinute() {
	return minute;
}
string time::toString() {
	stringstream ss;
	ss << hour << ":" << minute;
	return ss.str();
}