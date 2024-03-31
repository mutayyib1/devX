#include <cs50.h>
#include <stdio.h>

int main (void)
{
    int x = get_int ("Enter age of X - ");
    int y = get_int ("Enter age of Y - ");

    if (x>y)
    {
        printf (" X is older than Y\n");
    }
    else if (x<y)
    {
        printf (" Y is older than X\n");
    }
    else if (x == y)
    {
        printf ("They are just classmates.\n");
    }
}
