#include <stdio.h>

void substring (const char source[], int start, int count,
		char result[])
{
	int i = 0;

	while ( ( i < count ) && ( source[start+i] != '\0' ) ) 
	{
		result[i] = source[start + i];
		++i;
	}

	result[i] = '\0';
}

int main (void)
{
	void substring (const char source[], int start, int count,
		char result[]);

	const char testSource[] = "Nazdarek";
	char testResult[9];

	substring (testSource, 3, 3, testResult);

	printf ("%s\n", testResult);

	return 0;
}



		
