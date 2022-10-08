#pragma once
#include "car.h"
car::car() {
	brand = " ";
	plate = 0;
	weight = 0;
	color = " ";
	o = NULL;
	pay = NULL;
}
car::car(string brand, int plate, float weight, string color) {
	this->brand = brand;
	this->plate = plate;
	this->weight = weight;
	this->color = color;
	o = NULL;
	pay = NULL;
}
void car::setBrand(string brand) {
	this->brand = brand;
}
void car::setPlate(int plate) {
	this->plate = plate;
}
void car::setWeight(float weight) {
	this->weight = weight;
}
void car::setColor(string color) {
	this->color = color;
}
void car::setOwner(owner** o) {
	this->o = o;
}
void car::setPayment(payment** pay) {
	this->pay = pay;
}
string car::getBrand() {
	return brand;
}
int car::getPlate() {
	return plate;
}
float car::getWeight() {
	return weight;
}
string car::getColor() {
	return color;
}
owner** car::getOwner() {
	return o;
}
payment** car::getPayment() {
	return pay;
}