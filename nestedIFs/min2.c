#include <stdio.h>
int main()
{
    int a;
    int b;

    printf("Enter 2 numbers: \n");
    scanf("%d", &a);
    scanf("%d", &b);

    if (a > b)
    {
    printf("%d is the maximum of both numbers. \n", a);
    }
    else
    {
        printf("%d is the maximum of both numbers", b);
    }
}
