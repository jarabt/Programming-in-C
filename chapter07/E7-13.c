//Porgram to sort an array of integers into ascending order

#include <stdio.h>

void sort (_Bool ascending, int a[], int n)
{
	int i, j, temp;

	if ( ascending )
	{
		for ( i = 0; i < n - 1; ++i )
			for ( j = i + 1; j < n; ++j )
				if ( a[i] > a[j] )
				{
					temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
	}

	else
	{
		for ( i = 0; i < n - 1; ++i )
			for ( j = i + 1; j < n; ++j )
				if ( a[i] < a[j] )
				{
					temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
	}
}

int main (void)
{
	int i;
	int array[16] = { 34, -5, 6, 0, 12, 100, 56, 22,
			  44, -3, -9, 12, 17, 22, 6, 11 };
	void sort (_Bool ascending, int a[], int n);

	printf ("The array before the sort:\n");

	for ( i = 0; i < 16; ++i )
		printf ("%i ", array[i]);

	sort (0, array, 16);

	printf ("\n\nThe array after the sort:\n");

	for ( i = 0; i < 16; ++i )
		printf ("%i ", array[i]);

	printf ("\n");

	return 0;
}


