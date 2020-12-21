#pragma once
#include <iostream>
#include "Vehicle.h"
using namespace std;
class SpaceBus : public Vehicle
{
public:
	SpaceBus(const int& seats);
	~SpaceBus();
	void print() const;

	void setPlaces(int seats);

private:
	int seats;
	
};

