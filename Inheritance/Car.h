#pragma once
#include "Vehicle.h"
#include <iostream>
using namespace std;
class Car : protected Vehicle
{
	double power;
public:
	void setPower(const double& power);
	double  getPower() const;
	Car(const string& licensePlate = "AA9999AA", const size_t& speed = 0, const double& power = 0);
	void print() const;

	~Car();
};

