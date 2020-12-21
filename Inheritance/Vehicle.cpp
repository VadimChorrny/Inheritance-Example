#include "Vehicle.h"
#include <iostream>
using namespace std;

void Vehicle::setSpeed(const size_t& speed)
{
	this->speed = speed;
}

void Vehicle::setLicensePlate(const string& licensePlate)
{
	if (licensePlate.size() != 8)
		return;
	this->licensePlate = licensePlate;
}

const size_t& Vehicle::getSpeed() const
{
	return speed;
	// TODO: insert return statement here
}

const string& Vehicle::getLicensePlate() const
{
	return licensePlate;
	// TODO: insert return statement here
}

Vehicle::Vehicle(const string& licensePlate, const size_t& speed)
{
	setSpeed(speed);
	setLicensePlate(licensePlate);
	cout << "CTOR WORKED FOR VEHICLE" << licensePlate << endl;
	
}

Vehicle::~Vehicle()
{
	cout << "DTOR WORKED!!!" << endl;

}

void Vehicle::print() const
{
	cout << endl;
	cout << "Vehicle : " << licensePlate << endl;
	cout << "Current speed : " << speed << endl;
}
