// Program for reversing th digits of a number

#include <stdio.h>

int main (void)
{
  int number, right_digit;
  _Bool minus_sign = 0;
  
  printf ("Write your number.\n");
  scanf  ("%i", &number);
  
  if ( number < 0 )
  {
	  number = -number;
	  minus_sign = 1;
  }
    
  do
  {
    right_digit = number % 10;
    printf ("%i", right_digit);
    number = number / 10;
  }
  
  while ( number != 0 );
  
  if ( minus_sign = 1 )
	  printf ("-");

  printf ("\n");
  
  return 0;
}
