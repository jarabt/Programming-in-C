// Program to write columns m through n of each line of a file to stdout. 

#include <stdio.h>

int main (void)
{
	FILE *in;
	char buffer[81];
	char inName[64];
	int m, n;
	int i;


	// get file name from user
	printf ("Input name of a file to be copied: ");
	scanf ("%63s", inName);

	// get m and n colums from user
	printf ("Input starting and finishing column: ");
	scanf ("%d%d", &m, &n);	
	
	// Open file
	if ( ( in = fopen (inName, "r") ) == NULL ) 
	{
		printf ("Can't open %s for reading.\n", inName);
		return 1;
	}
	
	// get buffers
	while ( fgets (buffer, 81, in ) ) 
	{
		for ( i = m; i < n; i++ )
		       	putc (buffer[i], stdout);
		putc ('\n', stdout);
	}
	
	// Close open files
	fclose (in);

	return 0;

}



