/* Program to evaluate simple expressions of the form
 	value operator value		*/

#include <stdio.h>

int main (void)
{
	float value1, value2;
	char operator;

	printf ("Enter your expression.\n");
	scanf ("%i %c %i", &value1, &operator, &value2);

	switch (operator)
	{
		case '+':
			printf ("%.2f\n", value1 + value2);
			break;
		case '-':
			printf ("%.2f\n", value1 - value2);
			break;
		case '*':
			printf ("%.2f\n", value1 * value2);
			break;
		case '/':
			if ( value2 == 0 )
				printf ("Divisio by 0\n");
			else
				printf ("%.2f\n", value1 / value2);
			break;
		deafault:
			printf ("Unknown operator\n");
			break;
	}

	return 0;
}



