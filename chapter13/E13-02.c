#include <stdio.h>

enum month { January = 1, February, March, April, May, June,
	July, August, September, October, November, December };


char* monthName (enum month aMonth)
{
	char *name;
	
	switch (aMonth)
	{
		case January:
			name = "January";
			break;
		case February:
			name = "February";
			break;
		case March:
		      	name = "March";
			break;
		case April:
			name = "April";
			break;
		case May:
			name = "May";
			break;
		case June:
			name = "June";
			break;
		case July:
			name = "July";
			break;
		case August:
			name = "August";
			break;
		case September:
			name = "September";
			break;
		case October:
			name = "October";
			break;
		case November:
			name = "November";
			break;
		case December:
			name = "December";
			break;
	}

	return name;
}



int main (void)
{
	char* monthName (enum month m);
	enum month aMonth = 3;
	
	printf("%s\n", monthName (aMonth));

	return 0;
}



