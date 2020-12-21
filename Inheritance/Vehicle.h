#pragma once
#include <string>
using namespace std;
class Vehicle
{
public:
	void setSpeed(const size_t& speed);
	void setLicensePlate (const string& licensePlate);

	const size_t& getSpeed() const;
	const string& getLicensePlate () const;

	Vehicle(const string& licensePlate = "|| 777 ||", const size_t& speed = 0);
	~Vehicle(); 
	void print() const;
	
private:
	string licensePlate;
protected:
	size_t speed;
};

