#include <stdio.h>
int main()
{
    char string[50];
    int i;
    printf("Enter a string: ");
    scanf(" %[^\n]c", string);

    for (i = 0; string[i] != '\0'; i++)
    {
        printf("%c", string[i]);
    }

    printf("%s", string);

    printf("\n");
}