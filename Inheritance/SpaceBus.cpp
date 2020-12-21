#include "SpaceBus.h"

SpaceBus::SpaceBus(const int& seats)
{
	this->seats = seats;
}

SpaceBus::~SpaceBus()
{
}

void SpaceBus::print() const
{
	cout << "Seats:\t" << seats << endl;
}

void SpaceBus::setPlaces(int seats)
{
	if (seats == 0)
		return;
	else if (seats > 32)
		cout << "Bilshe za 32 !!! ERRRROR" << endl;
	else
		this->seats = seats;
}

