//Program to calculate quadratic equation

#include <stdio.h>

float absoluteValue (float x)
{
	if ( x < 0)
		x = -x;
	return x;
}

// Function to calculate the square root of a number

float squareRoot (float x)
{
	const float epsilon = .00001;
	float guess = 1.0;

	while ( absoluteValue ( ( x / ( guess * guess ) ) - 1 ) >= epsilon )
		guess = ( x / guess + guess ) / 2.0;

	return guess;
}



int main (void)
{
	float a, b, c, discriminant, x1, x2;
	
	printf ("Enter a b c: ");
	scanf ("%f%f%f", &a, &b, &c);

	discriminant = b * b - 4 * a * c;

	if ( discriminant < 0 )
	{
		printf ("x1 and x2 are only imaginary\n");
		return 0;
		
	}

	x1 = ( -b + squareRoot (discriminant) ) / ( 2 * a );
	x2 = ( -b - squareRoot (discriminant) ) / ( 2 * a );
	
	printf ("x1 = %f, x2 = %f\n", x1, x2);

	return 0;	
}



	


