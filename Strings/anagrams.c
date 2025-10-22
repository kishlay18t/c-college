#include <stdio.h>
#include <ctype.h>


int main()
{
    char str1[50];
    int i;
    printf("Enter a string: ");
    scanf(" %[^\n]", str1);

    for (i = 0; str1[i] != '\0'; i++)
    {
        str1[i] = tolower(str1[i]);
    }


    int freq1[256] = {0};  // Make sure the frequency is initialized.
    for (i = 0; str1[i] != '\0'; i++)
    {
        freq1[(unsigned char) str1[i] ]++;  // The char can be signed in C but indices are always positive. so make is 'un-signed' first.
    }


    char str2[50];
    printf("Enter a string: ");
    scanf(" %[^\n]", str2);

    for (i = 0; str2[i] != '\0'; i++)
    {
        str2[i] = tolower(str2[i]);
    } 

    int freq2[256] = {0};
    for (i = 0; str2[i] != '\0'; i++)
    {
        freq2[(unsigned char) str2[i] ]++;
    }

    int eq = 1;
    for (i = 0; i < 256; i++)
    {
        if (freq1[i] != freq2[i])
        {
            eq = 0;
        }
    }

    if (eq)
    {
        printf("Anagram");
    }
    else
    {
        printf("Not an anagram.");
    }

    printf("\n");
}