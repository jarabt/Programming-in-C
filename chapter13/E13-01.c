#include <stdio.h>

typedef int (*FunctionPtr) (void);

int multipl4x4 (void) 
{
	return 16;
}

int main (void)
{
	int multipl4x4 (void);
	FunctionPtr ptr;
	ptr = multipl4x4;
	int n;

	n = ptr();

	printf("%d\n", n);

	return 0;
}


