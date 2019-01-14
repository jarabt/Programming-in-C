#include <stdio.h>

int main (void)
{
	int number, n, divider;

	printf ("Type in integer \n");
	scanf ("%i", &number);

	
	do  	
	{
		n = number;
		divider = 1;
	
		while (n > 10)
		{
			n /= 10;
			divider *= 10;
		}			

		switch (n)
		{
			case 1:
				printf ("one ");
				break;
			case 2:
				printf ("two ");
				break;
			case 3:
				printf ("three ");
				break;
			case 4:
				printf ("four ");
				break;
			case 5:
				printf ("five ");
				break;
			case 6:
				printf ("six ");
				break;
			case 7:
				printf ("seven ");
				break;
			case 8:
				printf ("eight ");
				break;
			case 9:
				printf ("nine ");
				break;
			case 0:
				printf ("zero ");
				break;
		}

		number = number % divider;
	}
	
	while ( divider != 1 );

	printf ("\n");

	return 0;
}




