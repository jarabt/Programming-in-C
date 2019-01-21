#include <stdio.h>

// Program to illustarte rotation of integers

#include <stdio.h>

int int_size (void)
{
	int OnesComplOf0 = ~0;
	int i  = 0;

	while ( OnesComplOf0 )
	{
		OnesComplOf0 <<= 1;
		++i;
	}

	return i;
}


// Function to rotate an unsigned int left or right

unsigned int rotate (unsigned int value, int n)
{
	unsigned int result, bits;
	int int_size (void);
	int sizeOfInt;

	sizeOfInt = int_size();

	//scale down the shift count to a defined range

	if ( n > 0 )
		n = n % sizeOfInt;
	else
		n = -(-n % sizeOfInt);

	if ( n == 0 )
		result = value;
	else if ( n > 0 ) 	// left rotate
	{
		bits = value >> (sizeOfInt - n);
		result = value << n | bits;
	}
	else			// right rotate
	{
		n = -n;
		bits = value << (sizeOfInt - n);
		result = value >> n | bits;
	}

	return result;
}

int main (void)
{
	unsigned int w1 = 0xabcdef00u, w2 = 0xffff1122u;
	unsigned int rotate (unsigned int value, int n);

	printf ("%x\n", rotate (w1, 8));
	printf ("%x\n", rotate (w1, -16));
	printf ("%x\n", rotate (w2, 4));
	printf ("%x\n", rotate (w2, -2));
	printf ("%x\n", rotate (w1, 0));
	printf ("%x\n", rotate (w1, 44));

	return 0;
}
