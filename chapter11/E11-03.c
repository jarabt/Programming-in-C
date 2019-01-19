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

int main (void)
{
	int int_size (void);

	printf ("This computer's integer has %i bits.\n", int_size());

	return 0;
}

