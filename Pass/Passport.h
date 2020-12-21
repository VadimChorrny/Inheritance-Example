#pragma once
#include <string>
#include <iostream>
using namespace std;
class Passport
{
public:
	Passport(const string& name, const string& seriya, const int& number, const int& day, const int& month, const int& year);
	~Passport();
	void setName(const string& name);
	void setSeriya(const string& seriya);
	void setNumber(const int& number);
	void setBirtday(const int& day, const int& month, const int& year);
	void print() const;

	string& getName() const;
	string& getSeriya() const;
	int& getNumber() const;
	
private:
	string name;
	string seriya;
	int number;
	int day, month, year;

	


};

