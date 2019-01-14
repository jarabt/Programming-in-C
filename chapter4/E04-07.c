#include <stdio.h>

int main (void)
{
  int koruny, halire, count;
  
  for ( count = 1; count <= 10; ++count )
  {
    printf ("Enter koruny: ");
    scanf ("%i", &koruny);
    printf ("Enter halire: ");
    scanf ("%i", &halire);
    printf ("%i.%.2i Kc\n\n", koruny, halire);
  }
  
  return 0;
}
