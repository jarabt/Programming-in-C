#include <stdio.h>

void intToString ( int source, char result[] )
{
	int i,j;
	int digit;
	char temp;
	int nStrings;
	_Bool sign = 1;

	if ( source < 0 )
	{
	       source *= -1;	
	       sign = 0;
	}

	for ( i = 0; source >= 1; ++i )
	{
		digit = source % 10;
		result[i] = digit + '0';
		source /= 10;
	}

	if ( sign == 0 )
	{
		result[i] = '-';
       		result[i + 1] = '\0';	
	}

	else
	{
		result[i] = '\0';
		--i;
	}

	for ( j = 0; j < i; ++j )
	{
		temp = result[j];
		result[j] = result[i];
		result[i] = temp;
		--i;
	}
}

int main (void) 
{
	void intToString ( int source, char result[] );
	char result[12];

	intToString ( -123456, result );

	printf ("%s\n", result );

	return 0;
}




