#include <iostream>
#include "Passport.h"
#include "Date.h"

using namespace std;

int main()
{
	
	Passport p("Chorniy Vadim Oleksandrovuch", "BY021", 100101, Date{9,12,2003}, {5,12,2015});
	p.print();
	return 0;
}