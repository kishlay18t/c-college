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

    int start = 0, end = count - 1, temp;
    for (i = 0; i <= (count - 1)/2; i++)
    {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }

    printf("%s\n", str);
    return 0;
}
