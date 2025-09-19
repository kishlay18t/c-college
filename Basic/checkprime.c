#include <stdio.h>

int main()
{
    int a;

    printf("Type in a number here: \n");
    scanf("%d", &a);



    int div = 2;
    while (div < a)
    {
        if (a % div != 0)
        {
            div += 1;
            continue;
        }
        else
        {
            printf("%d is not a prime number.\n", a);
            break;
        }
    }

    if (div == a)
    {
        printf("%d is a prime number.\n", a);
    }
}
