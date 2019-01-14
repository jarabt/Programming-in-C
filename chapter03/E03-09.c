#include <stdio.h>

int main (void)
{
  int i = 996, j = 4;
  
  int result;   //next largest even multiple
  
  result = i - i % j + j;
  
  printf ("Next largest even multiple of %i and %i is %i\n", i, j, result);
  
  return 0;
}
