#include <stdio.h>
int main()
{
    int n, y, x, a;

    printf("Enter the height of the triangle: \n");
    scanf("%d", &n);

    for (y = 1; y <= n; y++)
    {
        for (x = 1; x <= y; x++)
        {
            a = 2*x - 1;
            printf("%d ", a);
        }

        printf("\n");
    }
}