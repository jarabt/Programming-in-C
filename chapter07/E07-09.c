#include <stdio.h>

int gcd (int u, int v)
{
	int temp;

	while ( v!= 0)
	{
		temp = u % v;
		u = v;
		v = temp;
	}

	return u;
}

int lcm (int u, int v)
{
	int result;

	result = ( u * v ) / gcd (u, v);
	return result;
}

int main (void)

{
	int result;
	
	result = lcm (15, 10);
	printf ("The lcm of 15 and 10 is %i\n", result);

	return 0;
}





