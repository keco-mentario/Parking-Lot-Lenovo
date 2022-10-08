#pragma once
#include <iostream>
using namespace std;

class owner {
private:
	int id;
	string name;
public:
	owner();
	void setID(int);
	void setName(string);
	int getID();
	string getName();
};