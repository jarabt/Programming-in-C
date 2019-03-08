#include<stdio.h>

int main (void)
{
	int a;
	int b = 0;
	int e;
	float f = 0.0;
	char c, d;
	char s[6];
	char t[20], u[20], v[20];

/*
	scanf ("%d%d", &a, &b);
	printf ("%d %d\n", a, b);

	scanf ("%c %c", &c, &d);
	printf ("%c-%c\n", c, d);
	
	scanf ("%[^b]s", s);
	scanf ("%3s", s);
	scanf ("%[ab]s", s);

	scanf ("%5c", s);
	scanf ("%c", s+1);
	printf ("%c\n", s[4]);

	scanf ("%i:%i", &a, &b);
	printf ("%i %i\n", a, b);
	
	scanf ("%i%%", &a);
	printf ("%i\n", a);

	scanf ("%i %5c %*f %s", &a, s, t);
	scanf ("%s %s %i", u, v, b);
	printf ("%i %s %f %s\n", a, s, f, t);
	printf ("%s %s %i\n", u, v, b);

	scanf ("%[^\n]\n", s);
	scanf ("%5c", t);
	printf ("%s %s\n", s, t);

	if ( scanf ("%i %f %i", &a, &f, &c) != 3  )
		printf ("Error on input\n");
	printf ("%i %f %i\n", a, f, c);
			
	printf ("%d\n", scanf ("%i %5c %*f %s", &a, s, t));
	printf ("%i %s %f %s\n", a, s, f, t);

*/
	printf ("%d\n", scanf ("%5c %n", t, &a));
	printf ("%d\n", a);

	return 0;
}

