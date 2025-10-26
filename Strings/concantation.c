#include <stdio.h>
int main()
{
    char str[300];
    printf("Input the string: \n");
    scanf("%[^\n]", str);

    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        count++;
    }

    char conc[100];
    printf("Enter the string to concantate: \n");
    scanf(" %[^\n]", conc);

    for (int i = 0; i <= conc[i] != '\0'; i++)
    {
        int j = count + i;
        str[j] = conc[i];
        j++;
    }

    printf("Concantated string = \"%s\"\n", str);
    return 0;
}