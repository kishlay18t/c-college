// To detect if a number is a magic number or not.

#include <stdio.h>
#include <math.h>

int digSum(int a)
{
    int sum = 0, digit;
    while ( a > 0)
    {
        digit = a % 10;
        sum = sum + digit;
        a = a/10;
    }
    return sum;
}

int main()
{
    // defining variables
    int n;

    printf("Enter the number: \n");
    scanf("%d", &n);

    int b = n;
    while (n > 9)
    {
        n = digSum(n);
    }
    
    if ( n == 1)
    {
        printf("%d is a magic number.\n", b);
    }
    else
    {
        printf("%d is not a magic number.\n", b);
    }
    return 0;
}