#include <stdio.h>

int main (void)
{
  double degreesFahr = 45;
  double degreesCels;
  
  degreesCels = (degreesFahr - 32) * 1.8;
  
  printf ("%g stupnu Fahrenheita je %g stupnu Celsia.\n", degreesFahr, degreesCels);
  
  return 0;
}

