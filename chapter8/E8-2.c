#include <stdio.h>

struct date
{
	int month;
	int day;
	int year;
};

int f_getN (struct date d)
{
	int fResult;

	if ( d.month <= 2)
		fResult = d.year - 1;

	else
		fResult = d.year;

	return fResult;
}

int g_getN (struct date d)
{
	int gResult;

	if ( d.month <= 2 )
		gResult = d.month + 13;

	else
		gResult = d.month + 1;

	return gResult;
}
	

int getN (struct date d)
{
	int N;
	int f_getN (struct date d);
	int g_getN (struct date d);
	
	N = 1461 * f_getN (d) / 4 + 153 * g_getN (d) / 5 + d.day;

	return N;
}

int main (void)
{
	int elapsedDays;
	int getN (struct date d);
	struct date firstDate;
	struct date secondDate;
	
	printf ("Enter the first date (mm dd yyyy):  ");
	scanf ("%i%i%i", &firstDate.month, &firstDate.day, 
			&firstDate.year);

	printf ("Enter the second date (mm dd yyyy): ");
	scanf ("%i%i%i", &secondDate.month, &secondDate.day, 
			&secondDate.year);

	elapsedDays = getN (secondDate) - getN (firstDate);

	printf ("Elapsed days = %i\n", elapsedDays);

	return 0;
}




	

