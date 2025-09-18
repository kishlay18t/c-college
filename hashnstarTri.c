#include <stdio.h>
int main()
{
    int n, y, xs, xh;

    printf("Enter the height of the triangle: \n");
    scanf("%d", &n);

    for ( y = 1; y <= n; y++)
    {
        for ( xh = n; xh > y; xh--)
        {
            printf("  ");
        }

        for ( xs = 1; xs < y; xs++)
        {
            printf("* ");
        }

        printf("\n");
    }
}