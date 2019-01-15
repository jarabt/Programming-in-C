#include <stdio.h>

void transposeMatrix ( int M[4][5], int N[5][4] )
{
	int i, j;

	for ( i = 0; i < 4; ++i )
		for ( j = 0; j < 5; ++j )
			N[j][i] = M[i][j];
}

int main (void)
{
	int i, j;

	int M[4][5] =
	{
		{ 1, 2, 3, 4, 5},
		{ 6, 7, 8, 9, 10},
		{ 11, 12, 13, 14, 15},
		{ 16, 17, 18, 19, 20}
	};

	int N[5][4] = {};

	printf ("Original M:\n");
	
	for ( i = 0; i < 4; ++i )
	{
		for ( j = 0; j < 5; ++j )
			printf ("%2i ", M[i][j]);
		printf ("\n");
	}

	printf ("\n");
	
	printf ("Original N:\n");

	for ( i = 0; i < 5; ++i )
	{
		for ( j = 0; j < 4; ++j )
			printf ("%2i ", N[i][j]);
		printf ("\n");
	}

	printf ("\n");

	transposeMatrix (M, N);

	printf ("After transposition M:\n");
	
	for ( i = 0; i < 4; ++i )
	{
		for ( j = 0; j < 5; ++j )
			printf ("%2i ", M[i][j]);
		printf ("\n");
	}

	printf ("\n");
	
	printf ("After transposition N:\n");

	for ( i = 0; i < 5; ++i )
	{
		for ( j = 0; j < 4; ++j )
			printf ("%2i ", N[i][j]);
		printf ("\n");
	}

	return 0;
}





