#pragma once
#include "Passport.h"
#include <vector>
#include "Visa.h"


class ForeignPassport : public Passport
{
public:
	ForeignPassport(const string& name, const string& seriya, const int& number, const Date& birth, const Date& issuance);
	ForeignPassport(const Passport& paspport, const  string& seria, const int& number, const Date& datePut);
	void addVisa(const Visa& visa);
private:
	vector<Visa> visas;

};

