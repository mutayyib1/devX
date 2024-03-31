#include <stdio.h>
#include <cs50.h>
// we need to mention the defined function here first and then we can define it below the program
int add(int a, int b);
int main (void)
{

  int x = get_int ("Enter the first number X\n");
  int y = get_int ("Enter the second number Y\n");
  printf ("The addition of X and Y is, %i\n", add (x,y));
}
int add (int a, int b)
{
    return a + b;
}
