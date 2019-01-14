//Porgram to sort an array of integers into ascending order
// using pointers

#include <stdio.h>

void sort (int *ptrToA, const int n)
{
	int *ptr1, *ptr2, *endOfArray, temp;

	ptr1 = ptrToA;
	endOfArray = ptrToA + n - 1;

	for ( ; ptr1 < endOfArray; ++ptr1 )
		for ( ptr2  = ptr1 + 1; ptr2 <= endOfArray; ++ptr2 )
			if ( *ptr1 > *ptr2 )
			{
				temp = *ptr1;
				*ptr1 = *ptr2;
				*ptr2 = temp;
			}
}

int main (void)
{
	void sort (int *ptrToA, const int n);
	int i;
	int array[16] = { 34, -5, 6, 0, 12, 100, 56, 22,
			  44, -3, -9, 12, 17, 22, 6, 11 };

	printf ("The array before the sort:\n");

	for ( i = 0; i < 16; ++i )
		printf ("%i ", array[i]);

	sort (array, 16);

	printf ("\n\nThe array after the sort:\n");

	for ( i = 0; i < 16; ++i )
		printf ("%i ", array[i]);

	printf ("\n");

	return 0;
}


