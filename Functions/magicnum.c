#include <stdio.h>

int digsum(int a)
{
    int r, sum = 0;
    while (a>0)
    {
        r = a%10;
        sum += r;
        a = a/10;
    }

    return sum;
}

int main()
{
    int n;

    printf("Enter a number: \n");
    scanf("%d", &n);

    int m = n;

    while (n > 9)
    {
        n = digsum( n );
    }

    if (n == 1)
    {
        printf("%d is a Magic number.\n", m);
    }
    else
    {
        printf("%d is Not a magic number.\n", m);
    }

    return 0;
}