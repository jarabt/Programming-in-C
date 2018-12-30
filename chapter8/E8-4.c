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
	int N;
	int modulo7;
	int i;
	struct day
	{
		int numberOfChars;
		char charsArray [8];
	};

	struct day week[7] = 
	
	{
		{6, {'S', 'u', 'n', 'd', 'a', 'y'}},
		{6, {'M', 'o', 'n', 'd', 'a', 'y'}},
		{7, {'T', 'u', 'e', 's', 'd', 'a', 'y'}},
		{8, {'W', 'e', 'n', 'd', 's', 'd', 'a', 'y'}},
		{8, {'T', 'h', 'u', 'r', 's', 'd', 'a', 'y'}},
		{6, {'F', 'r', 'i', 'd', 'a', 'y'}},
		{8, {'S', 'a', 't', 'u', 'r', 'd', 'a', 'y'}}
	};


	int getN (struct date d);
	struct date theDate;
	
	printf ("Enter the date (mm dd yyyy):  ");
	scanf ("%i%i%i", &theDate.month, &theDate.day, 
			&theDate.year);

	N = getN (theDate);
	
	modulo7 = (N - 621049) % 7;

	for ( i = 0; i < week[modulo7].numberOfChars; ++i )
		printf ("%c", week[modulo7].charsArray[i]);
	
	printf ("\n");

	return 0;
}




	

