#include <stdio.h>

int intArray [8] = { 2, 0, -80, 222, 5, -7, 7, 8 };
int numberOfElements = 8;
int sum = 0;


void arraySum (void)
{
	int i;

	for ( i = 0; i < numberOfElements; ++i )
		sum += intArray[i];
	
}

int main (void)
{
	arraySum();

	printf ("The sum is %i\n", sum);

	return 0;
}



