
#include <stdio.h>
#define IS_UPPER_CASE(a) ((a) <= 'Z') && ((a) >= 'A')
#define IS_LOWER_CASE(a) ((a) <= 'z') && ((a) >= 'a')
#define IS_ALPHABETIC(a) IS_LOWER_CASE(a) || IS_UPPER_CASE(a) ? 1 : 0

int main (void)
{

	printf ("a...%d\n",IS_ALPHABETIC('a'));
	printf ("_...%d\n",IS_ALPHABETIC('_'));
	

	return 0;
	
}

