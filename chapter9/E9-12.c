// Function to convert a string to an float with negative sign too


#include <stdio.h>

float strToFloat (const char string[])
{
	int i;
	float floatValue, result = 0, d = 10;

	int j = 0;
	int sign = 1;

	if ( string [0] == '-' )
	{
		j = 1;
		sign = -1;
	}
	


	for ( i = 0 + j; string[i] >= '0' && string[i] <= '9'; ++i )
	{
		floatValue = string[i] - '0';
		result = result * 10 + floatValue;
	}

	if ( string[i] == '.' )
		i += 1;
		for ( ; string[i] >= '0' && string[i] <= '9'; ++i )
			{
				floatValue = string[i] - '0';
				result = result + floatValue / d;
				d *= 10;
			}	



	result *= sign;

	return result;
}


int main (void)
{
	float strToFloat (const char string[]);

	printf ("%f\n", strToFloat("867.6921"));
	printf ("%f\n", strToFloat("-100") + 25.5);
	printf ("%f\n", strToFloat("13x5"));
	printf ("%f\n", strToFloat(".5"));

	return 0;
}

	
