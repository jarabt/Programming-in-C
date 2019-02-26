#include <stdio.h>
#include <ctype.h>

#define IS_UPPER_CASE(a) 	((a) <= 'Z') && ((a) >= 'A')
#define IS_LOWER_CASE(a) 	((a) <= 'z') && ((a) >= 'a')
#define IS_ALPHABETIC(a) 	IS_LOWER_CASE(a) || IS_UPPER_CASE(a) 			? 1 : 0 
#define IS_DIGIT(a) 		((a) <= '9') && ((a) >= '0') 				? 1 : 0 

int main (void)
{

	
	printf ("#.digitM..%d\n",IS_DIGIT('#'));
	printf ("#...%d\n",isdigit('#'));

	printf ("2.alphaM..%d\n",IS_ALPHABETIC('2'));
	printf ("2...%d\n",isalpha('2'));
	
	printf ("a.upperM..%d\n",IS_UPPER_CASE('a'));
	printf ("a...%d\n",isupper('a'));
	
	return 0;
	
}




