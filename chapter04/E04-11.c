#include <stdio.h>

int main (void)
{
	int number, digit, n, sum = 0;
	
	printf ("Enter the number ");
	scanf ("%i", &number);
	
	n = number;
	
	do
	{
		digit = n % 10;
		sum += digit;
		n /= 10;
	}
	
	while ( n != 0 );
	
	printf ("Sum of the digits of %i is %i\n", number, sum);
	
	return 0;
}
