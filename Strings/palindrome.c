#include <stdio.h>
int main()
{
    char str[50];
    int i, count = 0;
    printf("Enter a string: ");
    scanf(" %[^\n]c", str);

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

}