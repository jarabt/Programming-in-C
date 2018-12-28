#include <stdio.h>

long int x_to_the_n (int x, int n)
{
	int i;
	long int temp = 1;

	if ( n == 0 )
		return temp;

	for ( i = 1; i <= n; ++i )
		temp *= x;

	return temp;
}

int main (void)
{
	long int x_to_the_n (int x, int n);

	printf ("%li\n", x_to_the_n (2, 3));

	return 0;
}





