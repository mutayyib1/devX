// To Grade a text according to Coleman-Liau Index
// Coleman-Liau Index gives passages their grades/classes for students
#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

// defining functions for counting number of words, letters, sentences
int words(string s);
int sentences(string s);
int letters(string s);

// Defining function to round-off to nearest decimal
int roundoff(float number);
int main(void)
{
    // Input Text
    string text = get_string("Text: ");

    // Coleman-Liau Index
    int l = (100 * letters(text)) / words(text);
    int s = (100 * sentences(text)) / words(text);
    float index = (0.0588 * l) - (0.296 * s) - 15.8;

    // Conditions for different grades
    // Using Grade 1 & 16+ discreetly
    // Everything in between using roundoff function
    if (index < 0.500000)
    {
        printf("Before Grade 1\n");
    }
    else if (index > 15.500000)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", roundoff(index));
    }
}

// Counting Number of Words
int words(string s)
{
    int n = 0;

    // Counting spaces within the text to count words
    for (int i = 0, length = strlen(s); i < length; i++)
    {
        if (s[i] == 32)
        {
            n++;
        }
    }
    int twords = n + 1;

    // Returning total words
    return twords;
}

// Counting Number of sentences
int sentences(string s)
{
    int n = 0;
    int tsentences = 0;

    // Using the count of . ! ? to compute total sentences
    // if 0, sentence will still be 1
    for (int i = 0, length = strlen(s); i < length; i++)
    {
        if (s[i] == 33 || s[i] == 46 || s[i] == 63)
        {
            n++;
        }
    }
    if (n != 0)
    {
        tsentences = n;
    }
    else if (n == 0)
    {
        tsentences = n + 1;
    }
    // Returning total sentences
    return tsentences;
}

// Counting Number of Letters
int letters(string s)
{
    int n = 0;

    // Using ASCII codes for A-Z and a-z
    for (int i = 0, length = strlen(s); i < length; i++)
    {
        if (s[i] >= 65 && s[i] <= 90)
        {
            n = n + 1;
        }
        else if (s[i] >= 97 && s[i] <= 122)
        {
            n++;
        }
    }
    return n;
}

// Computing Roundoff of a float type
int roundoff(float number)
{
    // Converting number from float to int & storing it in n
    int n = number;
    float diff = number - n;

    // Rounding off using difference between number & n
    if (diff > 0.500000)
    {
        number = n + 1;
    }
    else
    {
        number = n;
    }

    // Returning number
    return number;
}
