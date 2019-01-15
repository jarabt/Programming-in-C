#include <stdio.h>

int prime (int n)
{
	int i;

	for ( i = 2; i < n; ++i )
		if ( n % i == 0 )
			return 0;

	return 1;
}

int main (void)
{
	int number;
	
	printf ("Enter integer: ");
	scanf ("%i", &number);

	printf ("1..is prime, 0..is not: %i\n", prime (number));

	return 0;
}


	




	

