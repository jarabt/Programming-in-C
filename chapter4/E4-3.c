#include <stdio.h>

int main (void)
{
  int n;
  
  for ( n = 5; n <= 50; n += 5 )
    printf ("Triangular number of %2i is %i\n", n, n * (n + 1) / 2);
    
  return 0;
}
    
