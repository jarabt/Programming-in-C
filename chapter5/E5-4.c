// Simple printing calculator

#include <stdio.h>

int main (void)
{
	float number, accumulator = 0;
	char operator;

	printf ("Begin calculations\n");

	do
	{
		scanf ("%f %c", &number, &operator);
		
		switch ( operator )
		{
			case '+':
				accumulator += number;
				break;

			case '-':
				accumulator -= number;
				break;
				
			case '*':
				accumulator *= number;
				break;

			case '/':
				if ( number == 0 )
					printf ("Division by 0\n");
				else
					accumulator /= number;
				break;

			case 'S':
				accumulator = number;
				break;

			case 'E':
				break;

			default:
				printf ("Unknown operator\n");
				break;
		}

		printf ("= %.6f\n", accumulator);
	}
	while ( operator != 'E' );

	printf ("End of calculations.\n");

	return 0;
}






