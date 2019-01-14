#include <stdio.h>

int main (void)
{
	float values[10] = { 45.2, 789.5558, 5, 45.78, -89, 5.78, -8.8, -456, 7.7, 0 };

	float sum = 0;

	int i;

	for ( i = 0; i < 10; ++i )
		sum += values[i];

	printf ("Prumer je %.3f\n", sum / 10);

	return 0;

}

