 #include <stdio.h>

int main (void)
{
  int n, number, triangularNumber, counter, numbers;
  
  printf ("How many numbers do you want to calculate? ");
  scanf ("%i", &numbers);
  printf ("\n");
  
  for ( counter = 1; counter <= numbers; ++counter )
  {
    printf ("What triangular number do you want? ");
    scanf  ("%i", &number);
    
    triangularNumber = 0;
    
    for ( n = 1; n <= number; ++n )
      triangularNumber += n;
      
    printf ("Triangular number %i is %i\n\n", number, triangularNumber);
  
  }
  
  return 0;
}

