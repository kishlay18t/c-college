#include <stdio.h>
int main()
{
    int n, y, x, x1;

    printf("Enter the height of the pyramid: \n");
    scanf("%d", &n);

    for ( y = n; y >= 1; y-- )
    {
        for ( x = y; x > 1; x--)
        {
            printf("\t");
        }
        for ( x1 = 1; x1 <= n + 1 -y; x1++)
        {
            printf("%d\t", x1);
        }
        for (x = n - y; x >= 1; x--)
        {
            printf("%d\t", x);
        }

        printf("\n");
    }
    return 0;
}