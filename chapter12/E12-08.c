#include <stdio.h>


#define IS_UPPER_CASE(a) 	((a) <= 'Z') && ((a) >= 'A')
#define IS_LOWER_CASE(a) 	((a) <= 'z') && ((a) >= 'a')
#define IS_ALPHABETIC(a) 	IS_LOWER_CASE(a) || IS_UPPER_CASE(a) 			? 1 : 0 

#define IS_DIGIT(a) 		((a) <= '9') && ((a) >= '0') 				? 1 : 0 

#define IS_SPECIAL(a) 		((IS_ALPHABETIC(a)) == 0) && ((IS_DIGIT(a)) == 0)  	? 1 : 0


int main (void)
{

	printf ("a...%d\n",IS_SPECIAL('a'));
	printf ("_...%d\n",IS_SPECIAL('_'));
	printf ("2...%d\n",IS_SPECIAL('2'));

	return 0;
	
}

