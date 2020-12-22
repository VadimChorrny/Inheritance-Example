#include "ForeignPassport.h"

ForeignPassport::ForeignPassport(const string& name, const string& seriya, const int& number, const Date& birth, const Date& issuance)
	:Passport(name,seriya,number,birth,issuance)
{
	cout << "__worked ctor with Foreign Passport__" << endl;
}

ForeignPassport::ForeignPassport(const Passport& passport, const string& seria, const int& number, const Date& datePut)
	:Passport(passport)
{}

void ForeignPassport::addVisa(const Visa & visa)
{
	visas.push_back(visa);
}
