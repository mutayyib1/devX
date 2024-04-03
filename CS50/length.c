// Program to find length of a string
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // asking user for a name
    string name = get_string("Name: ");
    int n = 0;

    // running a while loop till we don't find NUL
    while (name[n] != '\0')
    {
        n++;
    }
    printf("%i\n", n);
}
