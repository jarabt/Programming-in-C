#include <stdio.h>

#define ABSOLUT_VALUE(a) ((a) < 0) ? -(a) : a

int main (void) 
{
	int x = 1, delta = -12;

	printf ("%d\n",ABSOLUT_VALUE(x + delta));
       	return 0;
}


