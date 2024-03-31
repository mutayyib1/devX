#include <cs50.h>
#include <stdio.h>

int main (void)
{
    int x = get_int ("Enter a number\n");
    int y = get_int ("Enter a number\n");

    if (x>y)
    {
        printf (" X is greater than Y\n");
    }
    else if (x<y)
    {
        printf (" X is smaller than Y\n");
    }
    else if (x == y)
    {
        printf (" X is equal to Y\n");
    }
}
