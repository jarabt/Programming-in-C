#include <stdio.h>

int main (void)
{
  printf ("0x10.5 because exponent is missing.\n");
  printf ("0X0G1 because G cannot be in hexadecimal number.\n");
  printf ("98.7U because unsigned can be only integers.\n");
  printf ("17777s because there is no way in C how to explicitly write short constant.\n");
  printf ("0996 because 9 is not valid for octal numbers.\n");
  printf ("1.2Fe-7 because F must be at the end.\n");
  printf ("15,000 because comma should be point.\n");
  
  return 0;
}
