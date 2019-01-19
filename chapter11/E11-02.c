#include <stdio.h>

int main (void)
{
	unsigned int w1 = 0xf777ee22;
	signed int w2 = 0xf777ee22;

	printf ("w1 unsigned after >> 1: %x\n", w1 >>= 1);
	printf ("w2 the same signed after >> 1: %x\n", w2 >>= 1);

	if ( w2 != w1 )
		printf ("They are different, so its arithmetic right shift\n");
	else 
		printf ("They are same, so its logical right shift\n");

	return 0;
}



