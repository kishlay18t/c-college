#include <stdio.h>
int main()
{
    int n, a, sum = 0;

    printf("Enter the number of terms: \n");
    scanf("%d", &n);

    a = 0;

    while (a < n)
    {
        a += 1;
        printf("%d\n", a);
        sum = sum + a;
    }

    printf("sum = %d\n", sum);
}