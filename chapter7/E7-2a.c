// Program to calculate nth triangular number


#include <stdio.h>

int calculateTriangularNumber (int n)
{
	int i, triangularNumber = 0;

	for ( i =1; i <= n; ++i )
		triangularNumber += i;

	return triangularNumber;

}

int main (void)
{
		
	
	printf ("Triangular number %i is %i\n", 10, calculateTriangularNumber (10));
	printf ("Triangular number %i is %i\n", 20, calculateTriangularNumber (20));
	printf ("Triangular number %i is %i\n", 30, calculateTriangularNumber (50));	


	return 0;
}


