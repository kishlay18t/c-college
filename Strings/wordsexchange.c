#include <stdio.h>
int main()
{
    char str[50];
    int i, count = 0;
    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    for (i = 0; str[i] != '\0'; i++)
    {
        count++;
    }

    /*int j, strrev[100];
    for ( i = count -1; i >= 0; i--)
    {
        j = 0;
        while ( i != -1)
        {
            if (str[i] == ' ')
            {
                break;
            }
            else
            {
                strrev[j] = str[i];
                i--;
                j++;
            }
        } 
        strrev[j] = '\0';

        for (int k = j-1; k >= 0; k--)
        {
            printf("%c", strrev[k]);
        }
        printf(" ");
    }*/   //older version with 2 inner loops -->O(n squared)

    // O(n) version. I made it.
    int j = 0, strrev[100];

    for ( i = count -1; i >= 0; i--)
    {
        if ( str[i] != ' ') // Storing word from end to start till white space.
        {
            strrev[j] = str[i];
            j++;
        }
        if ((str[i] == ' ' && j > 0) || i == 0) // Printing the rverse of the word when white space appears. **J needs to be greater than 0, otherwise there were more than 1 white space.
        {
            strrev[j] = '\0';
            for (int k = j - 1; k >= 0; k--)  
            {
                printf("%c", strrev[k]);
            }

            j = 0;
            strrev[0] = '\0';
            printf(" "); // Reset the word array, it's counter(j) and printing a space for next word
        }
    }

    printf("\n");
    return 0;
}
