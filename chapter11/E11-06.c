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

int bitpad_search ( unsigned int source, unsigned int pattern, int n )
{
	int i, iSize, bitsOfSource;
	int int_size (void);
	unsigned int cleanPattern, cleanTempSource, testCleanSource, helpSource;

	iSize = int_size ();

	helpSource = source;

	for ( i = 0; helpSource != 0; ++i )
		helpSource >>= 1;

	bitsOfSource = i;		

	cleanPattern =    ( pattern << ( iSize - n ) ) >> ( iSize - n );

	for ( i = 0; ( iSize - i )  >= n; ++i ) 
	{
		cleanTempSource = ( ( source >> i ) << ( iSize - n ) ) >> ( iSize - n );

		if ( ( cleanPattern ^ cleanTempSource ) == 0 )
			return ( bitsOfSource - ( i + n ));
	}

	return -1;
}

int main (void)
{
	int bitpad_search ( unsigned int source, unsigned int pattern, int n );
	int index;

	index = bitpad_search ( 0xe1f4, 0x5, 3);

	printf ("index: %i\n", index);

	return 0;
}

