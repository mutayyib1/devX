// Program to Cipher Text asking user for key
#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Defining functions to operate modulu on capital & small letters
int modc(int n);
int mods(int n);

// Command Line Argument to enter the key
int main(int argc, string argv[])
{
    // converting the key into integer
    int rkey = atoi(argv[1]);

    // executing program only if key entered is a positive integer
    if (argv[1] > 0 && rkey > 0)
    {
        // input plaintext
        string plaintext = get_string("Plaintext:  ");
        string cipher = plaintext;
        printf("Ciphertext: ");

        // loop to run through plaintext char by char and change it by key
        for (int i = 0, length = strlen(plaintext); i < length; i++)
        {
            // if plaintext char is a cap letter
            if (plaintext[i] >= 65 && plaintext[i] <= 90)
            {
                cipher[i] = modc(plaintext[i] + rkey);
                printf("%c", cipher[i]);
            }
            // if plaintext char is a small letter
            else if (plaintext[i] >= 97 && plaintext[i] <= 122)
            {
                cipher[i] = mods(plaintext[i] + rkey);
                printf("%c", cipher[i]);
            }
            // if plaintext char is not a letter, it is printed as it is
            else
            {
                printf("%c", plaintext[i]);
            }
        }
        printf("\n");
    }

    // to print error code 1 if no positive integer is given in cmd line arg
    else
    {
        printf("1\n");
    }

}

// fn to apply modulu addn and wrap around Z towards A for cap letter
int modc(int n)
{
    int m = n - 65;
    int quot = m / 26;
    int diff = m - (quot * 26);
    int num = 65 + diff;
    return num;
}

// fn to apply modulu addn and wrap around z towards a for small letter
int mods (int n)
{
    int m = n - 97;
    int quot = m / 26;
    int diff = m - (quot * 26);
    int num = 97 + diff;
    return num;
}
