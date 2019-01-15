#include <stdio.h>

int compareStrings (const char *s1, const char *s2)
{
	int answer;

	while ( *s1 == *s2 && ( *s1 ) && ( *s2 ))
	{
		printf ("%c - %c\n", *s1, *s2);
		++s1;
		++s2;
	}
		
	if ( *s1 < *s2 )
		answer = -1;		/* s1 < s2 */

	else if ( *s1 == *s2 )
		answer = 0;		/* s1 == s2 */

	else
		answer = 1;		/* s1 > s2 */

	return answer;
}


int main (void)
{
	int compareStrings (const char *s1, const char *s2);

	char string1[] = "Nazdar";
	char string2[] = "Nazdar";

	int i = compareStrings (string1, string2);

	printf ("%i\n", i);

	if ( i )
		printf ("Ne\n");
	else
		printf ("Ano\n");

	return 0;
}


