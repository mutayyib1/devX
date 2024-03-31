// code to build a Mario pyramid given in problem set 1 CS50
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // to get a positive integer or 0
    int n;
    do
    {
        n = get_int("Size of Pyramid: \n");
    }
    while (n < 0);
    // loop to get pyramid design, right-aligned
    for (int i = 0; i < n; i++)
    {
        for (int d = n - 2; d >= i; d--)
        {
            printf(".");
        }
        for (int h = 0; h <= i; h++)
        {
            printf("#");
        }
        printf("\n");
    }
}
