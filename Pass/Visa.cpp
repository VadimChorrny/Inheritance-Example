#include "Visa.h"
#include <iostream>
using namespace std;

Visa::Visa(const string& country, const Date& issuance)
{
	setCountry(country);
	setIssuance(issuance);
}

void Visa::setCountry(const string& country)
{
	if (country != " ")
		this->country = country;
	else
		cerr << "error with country" << endl;
}

void Visa::setIssuance(const Date& issuance)
{	
	this->issuance = issuance;
}

void Visa::print() const
{
	cout << "___WORKED VISA PRINT___" << endl;
	cout << "Country:\t" << country << endl;
	cout << "Issuance:\n";
	issuance.print();
	
}
