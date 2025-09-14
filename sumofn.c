#include <stdio.h>
int main()
{
    int a;

    printf("Enter the number of digits to sum: \n");
    scanf("%d", &a);
    int i;
    int sum;

    sum = 0;
    for (i = 0; i <= a; i++)
    {
        sum = sum + i;
    }

    printf("%d\n", sum);
}
