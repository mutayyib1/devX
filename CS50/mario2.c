#include <stdio.h>
#include <cs50.h>

int main (void)
{

    int n;
    // Learning Do While Loop
    do
    {
     n = get_int("Enter the size of block \n");
    }
    while (n<1);


    for (int d =0; d<n; d++)
    {
      for (int i=0; i<n; i++)
        {
          printf ("#");
        }
       printf ("\n");
    }

}
