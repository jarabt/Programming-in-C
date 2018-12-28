#include <stdio.h>

int number = 111;
int answer = 1;

void prime (void)
{
	int i;

	for ( i = 2; i < number; ++i )
		if ( number % i == 0 )
			answer = 0;
}

int main (void)
{
	prime ();

	printf ("number %i\n", number);
	printf ("1..is prime, 0..is not: %i\n", answer);

	return 0;
}


	




	

