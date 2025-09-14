// program for finding leap year.

#include <stdio.h>
int main()
{
    int a;

    printf("Enter any year: \n");
    scanf("%d", &a);

    if (a % 4 == 0)
    {
        if (a % 100 != 0 || a % 400 == 0)
        {
            printf("%d is a leap year", a);
        }
        else
        {
            printf("%d is not a leap year", a);
        }
    }
    else
    {
        printf("%d is not a leap year", a);
    }
}
