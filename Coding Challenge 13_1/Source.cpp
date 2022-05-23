#include <iostream>
#include <string>
#include "Date.h"
using namespace std;

void date1(Date);
void date2(Date);
void date3(Date);


int main() {
	// our varibles for our main.
	int day;
	int month;
	int year;

	// to get the values for our variables.
	cout << "What is todays month? Please put the value in number form " << endl;
	cin >> month;
	while(!cin)
	{
		cout << "Please enter a valid number for month" << endl;
		cin.clear();
		cin.ignore(50, '\n');
		cin >> month;
	}
	
	if (month > 12 || month < 1)
	{
		cout << "A valid month is from 1 to 12, please enter again. " << endl;
		cin >> month;
	}
	

	cout << "What is todays day? Please put the value in number form " << endl;
	cin >> day;
	while (!cin)
	{
		cout << "Please enter a valid number for day" << endl;
		cin.clear();
		cin.ignore(50, '\n');
		cin >> day;
	}
	if (day > 31 || day < 1)
	{
		cout << "A valid day for all monnths will be in between 1 and 31 ";
		cout << "please enter a valid day " << endl;
		cin >> day;
	}

	
	cout << "What is todays year? Please put the value in number form " << endl;
	cin >> year;
	while (!cin)
	{
		cout << "Please enter a valid number for year" << endl;
		cin.clear();
		cin.ignore(50, '\n');
		cin >> year;
	}

	// we used some switch cases to determine if the days match the months length.

	switch (month)
	{
	case 2: 
		if (year % 4 == 0)
		{
			if (day > 29)
			{
				cout << "Your days for this month is wrong since its a leap year" << endl;
				cout << "Enter a day in between 1 and 29" << endl;
				cin >> day;
			}
		}
		else
			if (day > 28)
			{
				cout << "Your days for this month is wrong" << endl;
				cout << "Enter a day in between 1 and 28" << endl;
				cin >> day;
			}
		  break;
	case 4: if (day > 30)
	{
		cout << "Your days for this month is wrong" << endl;
		cout << "Enter a day in between 1 and 30" << endl;
		cin >> day;
	}
		  break;
	case 6: if (day > 30)
	{
		cout << "Your days for this month is wrong" << endl;
		cout << "Enter a day in between 1 and 30" << endl;
		cin >> day;
	}
		  break;
	case 9: if (day > 30)
	{
		cout << "Your days for this month is wrong" << endl;
		cout << "Enter a day in between 1 and 30" << endl;
		cin >> day;
	}
		  break;
	case 11: if (day > 30)
	{
		cout << "Your days for this month is wrong" << endl;
		cout << "Enter a day in between 1 and 30" << endl;
		cin >> day;
	}

	} // end of switch cases.

	// This is where we put our values in our classes. were also going to get our month in letters.

	Date First( day, month, year);
	First.setmonth(month);

	// Now we will display our Date in different ways.
	date1(First);
	cout << endl;
	date2(First);
	cout << endl;
	date3(First);
	return 0;
}


void date1(Date e)
{
	cout << e.getmonth() << "/" << e.getday() << "/" << e.getyear();
}

void date2(Date e)
{
	cout << e.getmonth1() << " " << e.getday() << " " << e.getyear();
}

void date3(Date e)
{
	cout << e.getyear() << " " << e.getmonth1() << " " << e.getday();
}