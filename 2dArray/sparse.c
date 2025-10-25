#include <stdio.h>
int main()
{
    int i,j,r,c;
    printf("Enter the Dimensions 1st matrix:");

    printf("\nRows: ");
    scanf("%d", &r);


    printf("Column: ");
    scanf(" %d", &c);

    int arr[r][c];
    
    //Input matrix
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("Enter the [%d,%d]th element: ", i+1, j+1);
            scanf("%d", &arr[i][j]);
        }
    }

    // Print Matrix
    printf("Matrix : \n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d  ", arr[i][j]);
        }

        printf("\n");
    }

    //counting 0 and non-zero.
    int zero = 0;

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (arr[i][j] == 0)
                zero++;
        }

        printf("\n");
    }

    if (zero > (r*c)/2 )
    {
        printf("Sparse");
    }
    else
    {
        printf("Not sparse.");
    }

    printf("\n");
    return 0;
}