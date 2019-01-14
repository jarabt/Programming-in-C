// Function to find a string inside another one

#include <stdio.h>
#include <stdbool.h>

int findString (const char toBeSearched[], const char toBeFound[])
{
	int j,i = 0;
	bool isEqual;

	while ( toBeSearched[i] != '\0' )
	{
		j = 0;
		isEqual = true;

		while ( ( toBeFound[j] != '\0') && ( isEqual ) )
		{
			if ( toBeSearched[j + i] == toBeFound[j] )
				isEqual = true;
			
			else
				isEqual = false;

			++j;
		}

		if ( isEqual )
			return i;

		++i;
	}

	return -1;
}

int main (void)
{
	int findString (const char toBeSearched[], const char toBeFound[]);

	printf ("%i\n", findString ("a chatterbox", "hat"));

	return 0;
}









