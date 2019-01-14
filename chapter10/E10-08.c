//Porgram to sort 3 integers into ascending order

#include <stdio.h>

void sort3 (int a, int b, int c)
{
	int *min, *mid, *max;

	min = &a;

	if ( *min > b )
		min = &b;
	if ( *min > c )
		min = &c;

	if ( *min == a )
		if ( b > c )
		{
			mid = &c;
			max = &b;
		}
		else
		{
			mid = &b;
			max = &c;
		}

	else if ( *min == b )
		if ( a > c )
		{
			mid = &c;
			max = &a;
		}
		else
		{
			mid = &a;
			max = &c;
		}
	
	else if ( *min == c )
	       	if ( b > a )
		{
			mid = &a;
			max = &b;
		}
		else
		{
			mid = &b;
			max = &a;
		}

	printf ("%i, %i, %i\n", *min, *mid, *max);

}

int main (void)
{
	void sort3 (int a, int b, int c);

	sort3 (55, -3, 52);

	return 0;
}


