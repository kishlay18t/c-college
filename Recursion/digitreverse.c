#include <stdio.h>

int reversehelper(int n, int rev)
{
    if (n == 0)
    {
        return rev;
    }

    return reversehelper(n/10, rev*10 + n%10);
}

int reverse(int n)
{
    return reversehelper(n, 0);
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Reverse of the number = %d\n", reverse(n));
}