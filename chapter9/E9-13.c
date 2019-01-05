#include <stdio.h>

void uppercase ( char text[] )
{
	int i;

	for ( i = 0; text[i] != '\0'; ++i )
		if ( text[i] >= 'a' && text[i] <= 'z' )
		       text[i] = text[i] - 'a' + 'A';
}

int main (void)
{
	void uppercase ( char text[] );
	char text[] = "To je Jarda";

	uppercase (text);

	printf ("%s\n", text);

	return 0;
}


