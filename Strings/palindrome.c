#include <stdio.h>
int main()
{
    char str[50];
    int i, count = 0;
    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    //counting the number of characters in the string.
    for (i = 0; str[i] != '\0'; i++)
    {
        count++;
    }

    printf("String = \"%s\"\n", str);

    // Printing reverse of string and assigning reverse to a new string.
    printf("Reverse of the string is: ");
    char revstr[50];
    int j = -1;  //For the elements in reverse string.
    for ( i = count; i >= 0; i--)
    {
        printf("%c", str[i]);
        revstr[j] = str[i];
        j++;
    }
    revstr[j] = '\0'; // End of the string.
    
    int pal = 0;

    // Comparison
    for (i = 0; str[i] != '\0'; i++)
    {
        if (revstr[i] == str[i])
        {
            pal++;
        }
    }

    if (pal == count)
        printf("\nPalindrome!");
    else
    {
        printf("\nNot a plaindrome!!");
    }

    printf("\n");

    //chatGPT version
    int j = 0;
    for (i = count - 1; i >= 0; i--)
    {
        revstr[j] = str[i];
        j++;
    }
    revstr[j] = '\0';
    
    int pal = 1;
    for (i = 0; i < count; i++)
    {
        if (str[i] != revstr[i])
        {
            pal = 0;
            break;
        }
    }

    if (pal)
        printf("Palindrome!");
    else
        printf("Not a palindrome!");

        return 0;
}