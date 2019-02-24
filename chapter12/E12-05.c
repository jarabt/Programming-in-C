
// Function to shift an usigned int left if
// the count is positive, and right if negative


#include <stdio.h>
#define SHIFT(a,b) (((b) > 0) ? ((a) << (b)) : ((a) >> (-(b))))


unsigned int shift (unsigned int value, int n)
{
	if ( n > 0 )    // left shift
		value <<= n;
	else 		// right shift
		value >>= -n;

	return value;
}

int main (void)
{
	unsigned int w1 = 0177777u, w2 = 04444u;
	unsigned int shift (unsigned int value, int n);

	printf ("%o\t%o\n", shift (w1, 5), w1 << 5);
	printf ("%o\t%o\n", shift (w1, -6), w1 >> 6); 
	printf ("%o\t%o\n", shift (w2, 0), w2 >> 0);
	printf ("%o\n\n", shift (shift (w1, -3), 3));

	printf ("%o\t%o\n", SHIFT(w1, 5), w1 << 5);
	printf ("%o\t%o\n", SHIFT(w1, -6), w1 >> 6);
	printf ("%o\t%o\n", SHIFT(w2, 0), w2 >> 0);
	printf ("%o\n\n", SHIFT( (SHIFT(w1, -3)), 3));

	
	return 0;
}

