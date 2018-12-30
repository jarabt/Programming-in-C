#include <stdio.h>
#include <stdbool.h>

struct date
{
	int month;
	int day;
	int year;
};

struct time
{
	int hour;
	int minutes;
	int seconds;
};

struct dateAndTime
{
	struct date sdate;
	struct time stime;
};

struct time timeUpdate (struct time now)
{
	++now.seconds;

	if ( now.seconds == 60 )
	{
		now.seconds = 0;
		++now.minutes;

		if ( now.minutes == 60 )
		{
			now.minutes = 0;
			++now.hour;

			if ( now.hour == 24 )
				now.hour = 0;
		}
	}

	return now;
}

// Function to determine if it's a leap year

bool isLeapYear (struct date d)
{
	bool leapYearFlag;
	
	if ( ( d.year % 4 == 0 && d.year % 100 != 0 ) ||
		      d.year % 400 == 0 )
		leapYearFlag = true;
	else
		leapYearFlag = false;

	return leapYearFlag;
}

// Function to find the number of days in a month

int numberOfDays (struct date d)
{
	int days;
	bool isLeapYear (struct date d);
	const int daysPerMonth [12] = { 31, 28, 31, 30, 
		31, 30, 31, 31, 30, 31, 30, 31 };

	if ( isLeapYear (d) && d.month == 2 )
	       return 29;
	else
		days = daysPerMonth[d.month - 1];

	return days;
}

// Function to calculate tomorrow's date

struct date dateUpdate (struct date today)
{
	struct date tomorrow;
	int numberOfDays (struct date d);

	if ( today.day != numberOfDays (today) )
	{
		tomorrow.day = today.day + 1;
		tomorrow.month = today.month;
		tomorrow.year = today.year;

	}

	else if ( today.month == 12 )
	{
		tomorrow.day = 1;
		tomorrow.month = 1;
		tomorrow.year = today.year + 1;
	}

	else
	{
		tomorrow.day = 1;
		tomorrow.month = today.month + 1;
		tomorrow.year = today.year;
	}

	return tomorrow;
}

struct dateAndTime clockKeeper (struct dateAndTime nowDAT)
{
	struct dateAndTime updatedDAT;
	struct time timeUpdate (struct time now);
	struct date dateUpdate (struct date today);

	updatedDAT = nowDAT;

	updatedDAT.stime = timeUpdate(nowDAT.stime);

	if ( ( updatedDAT.stime.hour == 0 ) && 
		       	( updatedDAT.stime.minutes == 0 ) &&
	       		( updatedDAT.stime.seconds == 0 ) )
		updatedDAT.sdate = dateUpdate (nowDAT.sdate);

	return updatedDAT;
}

int main (void)
{
 	struct dateAndTime clockKeeper (struct dateAndTime nowDAT);
	struct dateAndTime updatedDAT;

	struct dateAndTime nowDAT = {{ 1, 1, 2018}, {23, 59, 59}};

	updatedDAT = clockKeeper (nowDAT);

	printf ("%.2i/%.2i/%.2i\n", updatedDAT.sdate.month, 
			updatedDAT.sdate.day, updatedDAT.sdate.year);

	printf ("%.2i:%.2i:%.2i\n", updatedDAT.stime.hour, 
			updatedDAT.stime.minutes, updatedDAT.stime.seconds);

	return 0;
}







