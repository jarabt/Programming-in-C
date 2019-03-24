// Program to write 20 lines at ones from a file to stdout and waits for response from a user. 

#include <stdio.h>

int main (void)
{
	FILE *in;
	char buffer[81];
	char inName[64];
	char c;
	int i;
	
	// get file name from user
	printf ("Input name of a file to be viewed: ");
	scanf ("%63s", inName);

	// Open file
	if ( ( in = fopen (inName, "r") ) == NULL ) 
	{
		printf ("Can't open %s for reading.\n", inName);
		return 1;
	}
	
	// get buffers
	
	do 
	{
		for ( i = 0; ( ( fgets (buffer, 81, in) ) && ( i < 20 )  ); i++ )
			fputs ( buffer, stdout );
		scanf ("%s", &c);
	}
	
	while ( c != 'q' );

	
	// Close open files
	fclose (in);

	return 0;

}



