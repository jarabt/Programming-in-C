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

unsigned int bitpat_get ( unsigned int source, int index, int n )
{
	int i, iSize, bitsOfSource;
	int int_size (void);
	unsigned int cleanSource, helpSource, result;

	iSize = int_size ();

	helpSource = source;

	for ( i = 0; helpSource != 0; ++i )
		helpSource >>= 1;

	bitsOfSource = i;

	cleanSource = ( source << ( iSize - bitsOfSource + index ) ) >> ( iSize - bitsOfSource + index );

	result = cleanSource >> ( bitsOfSource - ( index + n ) );

	return result;
}

int main (void)
{
	unsigned int bitpat_get ( unsigned int source, int index, int n );
	unsigned int result;

	result =  bitpat_get ( 0xe1f4, 8, 3);

	printf ("result: %x\n", result);

	return 0;
}

