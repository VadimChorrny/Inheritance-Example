#include <iostream>
#include "Passport.h"
#include "Date.h"
#include "ForeignPassport.h"
#include "Visa.h"

using namespace std;

int main()
{
	Passport p("Chorniy Vadim Oleksandrovuch", "BY021", 100101, Date{ 9,12,2003 }, { 5,12,2015 });
	p.print();
	ForeignPassport f("Chorniy Vadim Oleksandrovuch", "BY021", 100101, Date{ 9,12,2003 }, { 5,12,2015 });
	f.addVisa(Visa("Ukrainian", Date{ 9,12,2003 }));
	Visa v("Ukraine", {20,11,2020});
	v.print();
	return 0;
}