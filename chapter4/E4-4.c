// Writes first 10 factorials

#include <stdio.h>

int main (void)
{
  int n;
  int temp = 1;
  
  printf ("TABULKA FAKTORIALU\n\n");
  printf (" n        n!\n");
  printf ("---    --------\n");
  
  for ( n = 1; n <= 10; ++n )
  {
    printf ("%2i     %i\n", n, n * temp);
    temp *= n;
  }
  
  return 0;
}


  
