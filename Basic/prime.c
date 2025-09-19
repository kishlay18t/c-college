// to find if the number is prime or not.
#include <stdio.h>
int main()
{
    int n, div;

    printf("Enter a number: \n");
    scanf("%d", &n);

    if (n == 2)
    {
        printf("%d is a prime number\n", n);
    }
    
    for (div = 2; div < n; div++)
    {
        if (n % div == 0)
        {
            printf("%d is not a prime number", n);
            break;
        }
        else if (n % div != 0 && div == n - 1)
        {
            printf("%d is a prime number\n", n);
        }
    }
    return 0;
}

// or if you wanna start from i = 1, start a dividing counter. If the counter is 2 by the end, it's a prime. Otherwise, it's not.
// The original definition of prime number 