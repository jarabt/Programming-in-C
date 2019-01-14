#include <stdio.h>

int main (void)
{
  int n;
  
  printf ("TABULKA CISEL NADRUHOU\n\n");
  printf (" n     n na druhou\n");
  printf ("--     -----------\n");
  
  for ( n = 1; n <= 10; ++n )
    printf ("%2i          %i\n", n, n*n);
  
  return 0;
}
