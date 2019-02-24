#include <stdio.h>
#define IS_UPPER_CASE(a) ((a) < 97) ? 1 : 0

int main (void)
{

	printf ("a...%d\n",IS_UPPER_CASE('a'));
	printf ("Z...%d\n",IS_UPPER_CASE('Z'));
	

	return 0;
	
}

