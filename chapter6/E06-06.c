#include <stdio.h>

int main (void)
{
	
	int iMinus2 = 0, iMinus1 = 1, Fibonacci, i;

	printf ("%i\n", iMinus2);
	printf ("%i\n", iMinus1);
	
	for ( i = 2; i < 15; ++i )
	{
		Fibonacci = iMinus2 + iMinus1;
		printf ("%i\n", Fibonacci);
		iMinus2 = iMinus1;
		iMinus1 = Fibonacci;
	}
	
	return 0;
}




