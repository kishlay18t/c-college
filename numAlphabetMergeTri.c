#include <stdio.h>
int main()
{
    int n, y, xa, x1;

    printf("Enter the height of the triangle: \n");
    scanf("%d", &n);

    for ( y = 1; y <= n; y++)
    {
        if (y % 2 != 0 || y == 1)
        {
            for ( xa = 1; xa <= y; xa++)
            {
                printf("%c ", 64 + xa);
            }
        }

        else
        {
            for ( x1 = 1; x1 <= y; x1++)
            {
                printf("%d ", x1);
            }

        }
        
        printf("\n");
    }

    return 0;
}