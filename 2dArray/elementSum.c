#include <stdio.h>
int main()
{
    int r, c, i, j, sum = 0;
    printf("Enter the dimensions of matrix: \n");
    scanf(" %d %d", &r, &c);
    r -= 1;
    c -= 1;
    int arr[r][c];
    
    for ( i = 0; i <= r; i++)
    {
        for( j = 0; j <= c; j++)
        {
            printf("Enter the [%d,%d]th element: ", i+1, j+1);
            scanf("%d", &arr[i][j]);
        }
    }

    for ( i = 0; i <= r; i++)
    {
        for( j = 0; j <= c; j++)
        {
            sum += arr[i][j];
        }
    }

    printf("Sum of all elements = %d\n", sum);
    return 0;
}