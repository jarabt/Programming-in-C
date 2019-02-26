#include <stdio.h>

#define printx(n) printf("%i\n", x ## n)

int main (void)
{
	int i, x1=10, x2=20, x3=30;

	for ( i = 1; i < 4; i++)
		printx(i);

	return 0;
}


// cannot be used, because preprocessor substitutes it to "xi" 
// and then compiler this variable doesn't know, because is
// not declared
