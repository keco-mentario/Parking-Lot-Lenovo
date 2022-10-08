#pragma once
#include"owner.h"
#include"payment.h"
#include <iostream>
using namespace std;

class car {
private:
	string brand;
	int plate;
	float weight;
	string color;
	owner** o;
	payment** pay;
public:
	car();
	car(string, int, float, string);
	void setBrand(string);
	void setPlate(int);
	void setWeight(float);
	void setColor(string);
	void setOwner(owner**);
	void setPayment(payment**);
	string getBrand();
	int getPlate();
	float getWeight();
	string getColor();
	owner** getOwner();
	payment** getPayment();
};