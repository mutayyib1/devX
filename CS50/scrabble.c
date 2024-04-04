// Program to calculate winner of Scrabble between two players
// acc to original scrabble scoring
#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

// Defining Function to Calculate Score of a String (only uppercase)
int score(string player);

int main(void)
{
    // Taking words of both players
    string player1 = get_string("Player 1: ");
    string player2 = get_string("Player 2: ");

    // using toupper to convert all characters into uppercase
    // to be used by score function
    for (int n = 0, l = strlen(player1); n < l; n++)
    {
        player1[n] = toupper(player1[n]);
    }
    for (int o = 0, m = strlen(player2); o < m; o++)
    {
        player2[o] = toupper(player2[o]);
    }

    // storing scores of both the players
    int score1 = score(player1);
    int score2 = score(player2);

    // comparing and printing the winner of scores
    if (score1 > score2)
    {
        printf("Player 1 Wins!\n");
    }
    else if (score1 < score2)
    {
        printf("Player 2 Wins!\n");
    }
    else
    {
        printf("It is a tie\n");
    }
}

// function to calculate scrabble score of string
int score(string player)
{
    int s = 0;

    // running through string chars with arrays fn & ASCII values
    for (int i = 0, length = strlen(player); i < length; i++)
    {
        if (player[i] == 90 || player[i] == 81)
        {
            s += 10;
        }
        else if (player[i] == 74 || player[i] == 88)
        {
            s += 8;
        }
        else if (player[i] == 75)
        {
            s += 5;
        }
        else if (player[i] == 70 || player[i] == 72 || player[i] == 86 || player[i] == 87 ||
                 player[i] == 89)
        {
            s += 4;
        }
        else if (player[i] == 66 || player[i] == 67 || player[i] == 77 || player[i] == 80)
        {
            s += 3;
        }
        else if (player[i] == 68 || player[i] == 71)
        {
            s += 2;
        }
        else
        {
            s += 1;
        }
    }
    // returning the resulting sum
    return s;
}
