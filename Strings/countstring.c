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

    printf("string = \"%s\"", str);
    printf("\nNumber of characters in the String = %d\n", count);
}