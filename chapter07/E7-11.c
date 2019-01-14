#include <stdio.h>

int arraySum (int intArray[], int numberOfElements)
{
	int i, sum = 0;

	for ( i = 0; i < numberOfElements; ++i )
		sum += intArray[i];

	return sum;
}

int main (void)
{
	int testArray [8] = { 2, 0, -80, 222, 5, -7, 7, 8 };

	printf ("The sum is %i\n", arraySum (testArray, 8));

	return 0;
}



