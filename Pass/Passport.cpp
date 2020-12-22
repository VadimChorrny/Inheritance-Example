#include "Passport.h"

Passport::Passport(const string& name, const string& seriya, const int& number,const Date& birth, const Date& issuance)
{
	setName(name);
	setSeriya(seriya);
	setNumber(number);
	setBirtday(birth);
	setIssuance(issuance);

	
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

void Passport::setBirtday(const Date& birth)
{
	this->birth = birth;
}

void Passport::setIssuance(const Date& issuance)
{
	this->issuance = issuance;
}

void Passport::print() 
{
	cout << endl;
	cout << "____WORKED PRINT_____" << endl;
	cout << "Name:\t" << name << endl;
	cout << "Seriya:\t" << seriya << "\nNumber:\t"<< number << endl;
	cout << "Birthday:\t";
	birth.print();
	cout << "Date issuance:\t" << endl;
	issuance.print();
	cout << "_________________________" << endl;

	

}


