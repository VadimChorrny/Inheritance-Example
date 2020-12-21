#include "Car.h"

void Car::setPower(const double& power)
{
	if (power <= 0)
		return;
	this->power = power;
}

double Car::getPower() const
{
	return power;

}

Car::Car(const string& licensePlate, const size_t& speed, const double& power)
	: Vehicle(licensePlate,speed)
{
	setLicensePlate(licensePlate);
	setSpeed(speed);
	setPower(power);
}

void Car::print() const
{
	Vehicle::print();
	cout << "Power:\t" << power << endl;

}

Car::~Car()
{
}


