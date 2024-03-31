#include <stdio.h>
#include <cs50.h>

int main (void)
{
  int x = get_int ("Enter the first number X\n");
  int y = get_int ("Enter the second number Y\n");
  
  printf ("The addition of X and Y is, %i\n", x + y);
}
