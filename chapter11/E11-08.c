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

void bitpat_set ( unsigned int *pToTargetInt, unsigned int source, int posInTarget, int nBits )
{
	int int_size (void);
	int i, iSize, bitsOfTarget;
	unsigned int rightPartOfT, helpTarget;

	helpTarget = *pToTargetInt;	

	iSize = int_size ();
	
	for ( i = 0; helpTarget != 0; ++i )
		helpTarget  >>= 1;

	bitsOfTarget = i;

	rightPartOfT = (*pToTargetInt << ( iSize - bitsOfTarget + posInTarget + nBits ))
				      >> ( iSize - bitsOfTarget + posInTarget + nBits );
	
	*pToTargetInt >>= ( bitsOfTarget - posInTarget ); 	// 2 moves to be clean   			
	*pToTargetInt <<= ( bitsOfTarget - posInTarget );
	*pToTargetInt >>= ( bitsOfTarget - ( posInTarget + nBits ) ); // to be ready
	*pToTargetInt |= source;
	*pToTargetInt <<= ( bitsOfTarget - ( posInTarget + nBits ) );  // left part is OK
	*pToTargetInt |= rightPartOfT;	// to add right part
}

int main (void)
{
	void bitpat_set ( unsigned int *pToTargetInt, unsigned int source, int posInTarget, int nBits );
	unsigned int targetInt, source;
	
	targetInt = 0xfffu;
	source = 0x1u;

	bitpat_set ( &targetInt, source, 4, 4);

	printf ("result: %x\n", targetInt);

	return 0;
}

