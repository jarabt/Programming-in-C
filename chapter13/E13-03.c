#include <stdio.h>

int main (void)
{
	float f = 1.00;
	short int i = 100;
	long int l = 500L;
	double d = 15.00;

	float prvni, treti, paty, sedmy, osmy;
	double druhy, sesty;
	long int ctvrty;

	prvni = f + i;
	druhy = l / d;
	treti = i / l + f;
	ctvrty = l * i;
	paty = f /2;
	sesty = i / (d + f);
	sedmy = l / (i * 2.0);
	osmy = l + i / (double) l;

	
	
	printf("sizeof(float)     %d\n", sizeof(float)); 
	printf("sizeof(short int) %d\n", sizeof(short int)); 
	printf("sizeof(long int)  %d\n", sizeof(long int)); 
	printf("sizeof(double)    %d\n\n", sizeof(double)); 
	
	printf("%lf\tsizeof: %d\n", f + i, sizeof(f + i)); 
	printf("%lf\tsizeof: %d\n", l / d, sizeof(l / d)); 
	printf("%lf\tsizeof: %d\n", i / l + f, sizeof(i / l + f)); 
	printf("%d\t\tsizeof: %d\n", l * i, sizeof(l * i)); 
	printf("%lf\tsizeof: %d\n", f /2, sizeof(f /2)); 
	printf("%lf\tsizeof: %d\n", i / (d + f), sizeof(i / (d + f))); 
	printf("%lf\tsizeof: %d\n", l / (i * 2.0), sizeof(l / (i * 2.0))); 
	printf("%lf\tsizeof: %d\n", l + i / (double) l, sizeof(l + i / (double) l)); 
	
	return 0;
}

