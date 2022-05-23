#include "Date.h"
// this will get the regular date
Date::Date(int d, int m, int y)
{
	day = d;
	month = m;
	year = y;
}


// this will get the month in string form. which is our mutator function
void Date::setmonth(int m)
{
	month = m;
	switch (m)
	{
	case 1: month1 = "Janurary";
		break;
	case 2: month1 = "Feburary";
		break;
	case 3: month1 = "March";
		break;
	case 4: month1 = "April";
		break;
	case 5: month1 = "May";
		break;
	case 6: month1 = "June";
		break;
	case 7: month1 = "July";
		break;
	case 8: month1 = "Augest";
		break;
	case 9: month1 = "September";
		break;
	case 10: month1 = "October";
		break;
	case 11: month1 = "November";
		break;
	case 12: month1 = "Decmember";
		break;
	}
}


// Accessor functions
int Date::getday() const
{
	return day;
}
int Date::getmonth() const
{
	return month;
}
string Date::getmonth1() const
{
	return month1;
}
int Date::getyear() const
{
	return year;
}
