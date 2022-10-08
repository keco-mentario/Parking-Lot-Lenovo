#include "owner.h"
owner::owner() {
	name = " ";
}
void owner::setID(int id) {
	this->id = id;
}
void owner::setName(string name) {
	this->name = name;
}
int owner::getID() {
	return id;
}
string owner::getName() {
	return name;
}