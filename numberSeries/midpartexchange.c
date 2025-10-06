// Reversing middle part of the Number only.

#include <stdio.h>
#include <math.h>

int dig(int a)
{
    int count = 0;
    while (a > 0)
    {
        a = a/10;
        count++;
    }
    return count;
}

int reverse(int n)
{
    int rev = 0, r;
    while (n != 0)
    {
        r = n % 10;
        n = n/10;
        rev = rev*10 + r;
    }
    return rev;
}




int main()
{
    int n, lastDig, midDig, firstDig, x;
    int r_last;

    printf("Enter a number: \n");
    scanf("%d", &n);

    // last number
    lastDig = n % 10;
    n = n/10;

    // For separating mid part.
    x = (int) pow( 10, (dig(n) - 1));

    // Number to be reversed, middle part.
    r_last = n % x;


    midDig = reverse(r_last);

    // 1st number.
    firstDig = n / x;

    int number = firstDig*10*x + midDig*10 + lastDig;

    printf("%d\n", number);

    return 0;
}