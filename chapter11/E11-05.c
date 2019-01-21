#include <stdio.h>

int bit_test ( unsigned int value, int n )
{
	int nBit;
	nBit = ( value >> ( 31 - n )) & 1;
	return nBit;
}

unsigned int bit_set ( unsigned int value, int n )
{
	unsigned int valueAfter;
	unsigned int tempRest;

	tempRest = ( value << (n + 1)  ) >> ( n + 1 );

	valueAfter = ( ( ( value >> ( 31 - n ) ) | 1 ) << ( 31 - n ) ) | tempRest;

	return valueAfter;
}


int main (void)
{
	int bit_test ( unsigned int value, int n );
	unsigned int bit_set ( unsigned int value, int n );
	unsigned int w, wAfter;

	w = 0x7BBBF711;
	wAfter = bit_set ( w, 28);


	printf ("before: %x\n", w);

	printf ("afer:   %x\n", wAfter);
	
	return 0;
}






