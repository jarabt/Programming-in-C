// Function to calculate the absolute value of a number

#include <stdio.h>

float absoluteValue (float x)
{
	if ( x < 0)
		x = -x;
	return x;
}

// Function to calculate the square root of a number

float squareRoot (float x,float epsilon)
{
	float guess = 1.0;

	while ( absoluteValue (guess * guess - x) >= epsilon )
		guess = ( x / guess + guess ) / 2.0;

	return guess;
}

int main (void)
{
	const float epsilon = .00001; 

	printf ("squareRoot (2.0) = %f\n", squareRoot (2.0, epsilon));
	printf ("squareRoot (144.0) = %f\n", squareRoot (144.0, epsilon));
	printf ("squareRoot (17.5) = %f\n", squareRoot (17.5, epsilon));

	return 0;
}

			




