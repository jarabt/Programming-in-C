#include <stdio.h>

int main (void)
{
	int i;
	char line[81];
	void readLine(char *ptr);

	for ( i = 0; i < 3; ++i )
	{
		readLine ( line );
		printf ("%s\n\n", line);
	}

	return 0;
}

// Function to read a line of text from the terminal

void readLine (char *ptr)
{
	char character;
	
	do  
	{
		character = getchar ();
		*ptr = character;
		++ptr;
	}
	while ( character != '\n' );
	
	*(ptr - 1)  = '\0';
}

