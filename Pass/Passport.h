#pragma once
#include <string>
#include <iostream>
#include "Date.h"
using namespace std;
class Passport
{
public:
	Passport(const string& name, const string& seriya, const int& number, const Date& birth, const Date& issuance);
	~Passport();
	void setName(const string& name);
	void setSeriya(const string& seriya);
	void setNumber(const int& number);
	void setBirtday(const Date& birth);
	void setIssuance(const Date& issuance);
	void print();

private:
	string name = "Name";
	string seriya = "Seriya";
	int number = 777;
	Date birth = { 9,12,2003 }; // default
	Date issuance = { 10,12,2017 }; // default

	


};

