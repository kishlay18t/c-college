#include <stdio.h>

int power(int n, int p)
{
    int pr = 1, i;
    for (i = 1; i <= p; i++)
    {
        pr = pr*n;
    }

    return pr;
}

int main()
{
    int m, a;

    printf("Enter a base number: ");
    if (scanf("%d", &m) != 1) 
    {
        printf("Invalid input for base.\n");
        return 1;
    }

    printf("Enter an exponent (non-negative): ");
    if (scanf("%d", &a) != 1 || a < 0) 
    {
        printf("Invalid input for exponent.\n");
        return 1;
    }

    int x = power(m, a);
    printf("%d raised to the power %d is %d.\n", m, a, x);

    return 0;
}