#include <iostream>
#include <string>
using namespace std;
class Date
{

private:
	int day;
	int month;
	int year;
	string month1;
public:
	// constructor function
	Date(int, int, int);

	// mutator functions
	void setmonth(int);

	// Accessor functions
	int getday() const;
	int getmonth() const;
	int getyear() const;
	string getmonth1() const;

};

