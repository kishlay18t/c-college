#include <stdio.h>
int main()
{
    char str[50];
    int i, count = 0;
    printf("Enter a string: ");
    scanf(" %[^\n]c", str);

    for (i = 0; str[i] != '\0'; i++)
    {
        count++;
    }

    printf("String = \"%s\"\n", str);

    printf("Reverse of the string is: ");

    for ( i = count; i >= 0; i--)
    {
        printf("%c", str[i]);
    }

    printf("\n");

}