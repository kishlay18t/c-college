// 1-5+3-7+5-9-7-11....n terms.

#include <stdio.h>
int main()
{
    int i, a, sum = 0, b, n;

    printf("Enter the number of terms: \n");
    scanf(" %d", &n);

    for (i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            a = i;
            printf("+%i", a);
            sum = sum + a;
        }
        else if (i % 2 == 0)
        {
            b = i + 3;
            printf("-%d", b);
            sum = sum - b;
        }
    }
    printf("\n Sum = %d\n", sum);
}