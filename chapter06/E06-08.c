#include <stdio.h>

int main (void)
{
	
	int pocetZnamek, i;
	
	printf ("Zadej pocet znamek? ");
	scanf ("%i", &pocetZnamek);

	int znamky[pocetZnamek];

	printf ("Zadavej znamky:\n");

	for ( i = 0; i < pocetZnamek; ++i )
		scanf ("%i", &znamky[i]);

	printf ("\n\nVypis znamek:\n");
	
	for ( i = 0; i < pocetZnamek; ++i )
		printf ("%i ", znamky[i]);

	printf ("\n");

	return 0;

}







	
