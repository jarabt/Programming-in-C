// Function to insert character string to a character string

#include <stdio.h>

void insertString ( char sourceString[], const char toBeInserted[], int position )
{
	int nSC;		// number of chars in sourceString[] incl null ch
	int nTBI;		// number of chars in toBeInserted[] incl null ch

	int i;
	int j;
	int k;
	int l;

	for ( i = 0; sourceString[i] != '\0'; ++i );
       	nSC = i;	

	for ( j = 0; toBeInserted[j] != '\0'; ++j );
	nTBI = j;			


	for ( k = nSC; k >= position; --k )
		sourceString[k + nTBI] = sourceString[k];

	for ( l = 0; toBeInserted[l] != '\0' ; ++l )
		sourceString[position + l] = toBeInserted[l];
}

int main (void)
{
	void insertString ( char sourceString[], const char toBeInserted[], int position );
	char text[] = "The wrong son";

	insertString ( text, "per", 10);

	printf ("%s\n", text);

	return 0;

}



	




