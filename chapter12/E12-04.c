#include <stdio.h>
#define MAX(a,b) 	(( (a) > (b) ) ? (a) : (b) )
#define MAX3(a,b,c) 	(( (MAX(a,b)) > (c) ) ? (MAX(a,b)) : (c) )

int main (void)
{
	int i = 10, ii = 500, iii = 300;
	double d = 45.8, dd = 5.7, ddd = 1.2;
	char c = 'y', cc = 'c', ccc = 'z'; 

	printf ("MAX3(i,ii,iii) = %d\n",MAX3(i,ii,iii));
	printf ("MAX3(d,dd,ddd) = %lf\n",MAX3(d,dd,ddd));
	printf ("MAX3(c,cc,ccc) = %c\n",MAX3(c,cc,ccc));

	return 0;
}


