#include "parkingSpace.h"

parkingSpace::parkingSpace() {
	spaceNum = 0;
	maxCarsPerDay = 100; // KAEO
	state = 'F';
	for (int i = 0; i < maxCarsPerDay; i++) {
		c[i] = NULL;
	}
}
void parkingSpace::setSpaceNum(int spaceNum) {
	this->spaceNum = spaceNum;
}
void parkingSpace::setState(char state) {
	this->state = state;
}
void parkingSpace::setCar(car** c, int carNum) {
	this->c[carNum] = c;
}
int parkingSpace::getSpaceNum() {
	return spaceNum;
}
char parkingSpace::getState() {
	return state;
}
car** parkingSpace::getCar(int carNum) {
	return c[carNum];
}