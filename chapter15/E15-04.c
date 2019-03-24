
// Program to merge lines alternatively from two files and writes the results to stdout.

#include <stdio.h>

int main (void)
{
	char inName1[64], inName2[64];
	FILE *in1, *in2;
	char buffer1[81];
	char buffer2[81];
	int flag = 0;			// to switch betweem files
	int flag1 = 1, flag2 = 1;	// being succesful in reading from particular file

	// get file names from user

	printf ("Input name of first file to be copied: ");
	scanf ("%63s", inName1);
	
	printf ("Input name of second file to be copied: ");
	scanf ("%63s", inName2);
	
	
	// Open files

	if ( ( in1 = fopen (inName1, "r") ) == NULL ) 
	{
		printf ("Can't open %s for reading.\n", inName1);
		return 1;
	}
	
	if ( ( in2 = fopen (inName2, "r") ) == NULL ) 
	{
		printf ("Can't open %s for reading.\n", inName2);
		return 1;
	}
	
	// Merge and view

	while ( flag1 || flag2 ) 
	{
		if (flag == 0)
			if ( fgets (buffer1, 81, in1 ) )
				fputs (buffer1, stdout);
			else
				flag1 = 0;

		if (flag == 1)
			if ( fgets (buffer2, 81, in2 ) )
				fputs (buffer2, stdout);
			else
				flag2 = 0;


		if (flag == 1)
			flag = 0;
		else 
			flag = 1;
	}
		
	
	// Close open files

	fclose (in1);
	fclose (in2);

	return 0;

}



