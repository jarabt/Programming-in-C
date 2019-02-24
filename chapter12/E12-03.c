#include <stdio.h>
#define MIN(a,b) (( (a) < (b) ) ? (a) : (b) )

int main (void)
{
	int i = 10, ii = 500;
	double d = 45.8, dd = 5.7;
	char c = 'y', cc = 'c'; 

	printf ("MIN(i,ii) = %d\n",MIN(i,ii));
	printf ("MIN(d,dd) = %lf\n",MIN(d,dd));
	printf ("MIN(c,cc) = %c\n",MIN(c,cc));

	return 0;
}


