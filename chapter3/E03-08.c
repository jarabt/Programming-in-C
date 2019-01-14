// to round off an integer i to the next largest even multiple of anothe integer

#include <stdio.h>

int main (void)
{
	int i = 256;
	int j = 7;

	int Next_multiple;

	Next_multiple = i + j - i % j;

	printf ("%i\n", Next_multiple);

	return 0;
}


