/* Program to consider even division of two values */

#include <stdio.h>

int main (void)
{
	int value1, value2;

	printf ("Type in two integers ");
	scanf ("%i %i", &value1, &value2);

	if ( value1 % value2 == 0 )
		printf ("yes\n");
	else
		printf ("no\n");

	return 0;
}

