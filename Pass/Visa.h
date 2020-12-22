#pragma once
#include <string>
#include "Date.h"
using namespace std;
class Visa
{
public:
	Visa(const string& country, const Date& issuance);
	void setCountry(const string& country);
	void setIssuance(const Date& issuance);
	void print() const;
private:
	string country;
	Date issuance;

};

