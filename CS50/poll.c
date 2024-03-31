#include <cs50.h>
#include <stdio.h>

int main (void)
{
    printf ("Comparing Numbers. Is 50 greater 35?\n");
    char c = get_char ("Do You Agree?\n");
    if (c == 'y' || c == 'Y')
    {
        printf ("You're absolutely right\n");
        int num = 3;
        while (num > 0)
        {
            printf ("Have a cookie\n");
            num =num - 1;
        }
    }
    else if (c == 'n' || c == 'N')
    {
        printf ("You're absolutely wrong\n");
        int dum = 3;
        while (dum > 0)
        {
            printf ("Go back to primary school!\n");
            dum = dum - 1;
        }
    }
}
