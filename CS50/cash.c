// to get minimum number of coins cashier has to return from 100 cents received
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("Thank you for giving me a dollar note\n");
    int num;
    // to get a number between 0 and 100 from user
    do
    {
        num = get_int("Enter the amount of commodity bought:    ");
    }
    while (num <= 0 || num > 100);

    int r = 100 - num;
    printf("Change Owed to you is:  %i\n", r);

    // entering value of each coin
    const int quarter = 25;
    const int dime = 10;
    const int nickel = 5;
    const int penny = 1;

    // mathematical algorithm to compute number of coins
    int m = r / quarter;
    int a = quarter * m;
    int value = r - a;
    int n = value / dime;
    int b = dime * n;
    int value1 = value - b;
    int o = value1 / nickel;
    int c = nickel * o;
    int value2 = value1 - c;
    int p = value2 / penny;

    // conditioning to print number of coins
    if (r == a)
    {
        printf("Coins to be given: %i\n", m);
    }
    else if (value == b)
    {
        printf("Coins to be given: %i\n", m + n);
    }
    else if (value1 == c)
    {
        printf("Coins to be given: %i\n", m + n + o);
    }
    else
    {
        printf("Coins to be given: %i\n", m + n + o + p);
    }

    printf("You are welcome! \n");
}
