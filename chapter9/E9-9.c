// Improved function to replace string

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

void removeString ( char sourceString[], int index_start, int nToRemove )
{
	while (sourceString[index_start + nToRemove] != '\0') 
	{
		sourceString[index_start] = sourceString[index_start + nToRemove];
		++index_start;
	}

	sourceString[index_start] = '\0';
}

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

bool replaceString (char sourceS[], const char toBeReplaced[], const char toBeInserted[])
{
	
	int position;		// index of start of action in source
	int nTBR;		// length of toBeReplaced
	int i;

	int findString (const char toBeSearched[], const char toBeFound[]);
	void removeString ( char sourceString[], int index_start, int nToRemove );
	void insertString ( char sourceString[], const char toBeInserted[], int position );
	
	
	position = findString ( sourceS, toBeReplaced );

	if ( position < 0 )
		return false;

	for ( i = 0; toBeReplaced[i] != '\0'; ++i );
       	nTBR = i;	
	
	removeString ( sourceS, position, nTBR );

	insertString ( sourceS, toBeInserted, position );

	return true;
}


int main (void)
{
	bool replaceString (char sourceS[], const char toBeReplaced[], const char toBeInserted[]);
	
	bool stillFound;
	char text[] = "The wrong son";

	do
		stillFound = replaceString ( text, " ", "");
	while ( stillFound );

	printf ("%s\n", text);

	return 0;

}


