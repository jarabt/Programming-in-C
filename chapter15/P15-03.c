//Inputting a single number and outputting several calculations

#include <stdio.h>

int main (void)
{
	float d = 6.5;
	float half, square, cube;

	printf("Enter a number betweem 1 and 100: \n");
	scanf("%f", &d);
	half = d/2;
	square = d*d;
	cube = d*d*d;

	printf("\nYour number is %.2f\n", d);
	printf("Half of it is %.2f\n", half);
	printf("Square it to get %.2f\n", square);
	printf("Cube it to get %.f\n", cube);

	return 0;
}

// program1503 > results2.txt
