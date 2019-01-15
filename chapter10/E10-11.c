#include <stdio.h>
#include <stdbool.h>

struct date
{
	int month;
	int day;
	int year;
};

// Function to calculate tomorrow's date

void dateUpDate (struct date *ptrToToday)
{
	int numberOfDays (struct date *ptr);

	if ( ptrToToday->day != numberOfDays (ptrToToday) )
	{
		++ptrToToday->day;
	}

	else if ( ptrToToday->month == 12 )
	{
		ptrToToday->day = 1;
		ptrToToday->month = 1;
		++ptrToToday->year;
	}

	else
	{
		ptrToToday->day = 1;
		++ptrToToday->month;
	}
}

// Function to find the number of days in a month

int numberOfDays (struct date *ptrToDate)
{
	int days;
	bool isLeapYear (struct date *ptr);
	const int daysPerMonth [12] = { 31, 28, 31, 30, 
		31, 30, 31, 31, 30, 31, 30, 31 };

	if ( isLeapYear (ptrToDate) && ptrToDate->month == 2 )
	       return 29;
	else
		days = daysPerMonth[ptrToDate->month - 1];

	return days;
}

// Function to determine if it's a leap year

bool isLeapYear (struct date *ptrToDate)
{
	bool leapYearFlag;
	
	if ( ( ptrToDate->year % 4 == 0 && ptrToDate->year % 100 != 0 ) ||
		      ptrToDate->year % 400 == 0 )
		leapYearFlag = true;
	else
		leapYearFlag = false;

	return leapYearFlag;
}

int main (void)
{ 
	void dateUpDate (struct date *ptrToToday);
	struct date thisDay;

	printf ("Enter today's date (mm dd yyyy): ");
	scanf ("%i%i%i", &thisDay.month, &thisDay.day, 
			&thisDay.year);

	dateUpDate (&thisDay);

	printf ("Tomorrow's date is %i/%i/%.2i.\n", thisDay.month,
			thisDay.day, thisDay.year % 100);

	return 0;
}











