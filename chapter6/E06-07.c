#include <stdio.h>

int main (void)
{
	int P[151];
	int i, j;
	int n = 150;

	for ( i = 2; i <= n; ++i )
	       P[i] = 0;
	
	
	for ( i = 2; i <= n; ++i )
	{
		if ( P[i] == 0 )
			printf ("%i  ", i);

		for ( j = 1; i * j <= n; ++j )
			P[i * j] = 1;
	}


	return 0;
}

		


	


