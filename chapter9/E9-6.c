// Function to remove a specified number of characters from a character string

#include <stdio.h>

void removeString ( char sourceString[], int index_start, int nToRemove )
{
	while (sourceString[index_start + nToRemove] != '\0') 
	{
		sourceString[index_start] = sourceString[index_start + nToRemove];
		++index_start;
	}

	sourceString[index_start] = '\0';
}

int main (void)
{
	void removeString ( char sourceString[], int index_start, int nToRemove );
	
	char testString[] = "The wrong son";

	removeString (testString, 4, 6);

	printf ("%s\n", testString);

	return 0;

}



	




