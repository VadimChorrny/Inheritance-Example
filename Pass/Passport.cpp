#include "Passport.h"

Passport::Passport(const string& name, const string& seriya, const int& number,const int& day, const int& month,const int& year)
{
	this->name = name;
	this->seriya = seriya;
	this->number = number;
	this->day = day;
	this->month = month;
	this->year = year;
	
}

Passport::~Passport()
{
	cout << "_______WORKED DTOR_______" << endl;
}

void Passport::setName(const string& name)
{
	if (name != " ")
	{
		this->name = name;
	}
	else
	{
		cout << "error with name" << endl;
	}
}

void Passport::setSeriya(const string& seriya)
{
	if (seriya != seriya)
		this->seriya = seriya;
	else
		cerr << "error with seriya" << endl;
}

void Passport::setNumber(const int& number)
{
	if (number != 0)
		this->number = number;
	else
		cerr << "error with number" << endl;
}

void Passport::setBirtday(const int& day, const int& month, const int& year)
{
	if (day == 0 && day < 31)
		this->day = day;
	else if (month == 0 && month < 12)
		this->month = month;
	else if (year == 0 && year > 1900 && year < 2010)
		this->year = year;
	else
		cerr << "error with day" << endl;


}

void Passport::print() const
{
	cout << "____WORKED PRINT_____" << endl;
	cout << "Name:\t" << name << endl;
	cout << "Seriya:\t" << seriya << "\n Number:\t"<< number << endl;
	cout << "Day:\t" << day << endl;
	cout << "Month:\t" << month << endl;
	cout << "Year:\t" << year << endl;

	

}
