#include <stdio.h>
int main()
{
    int i,j,r,c,sum = 0;
    printf("Enter the Dimensions:");

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
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d  ", arr[i][j]);
        }

        printf("\n");
    }

    // sum of rows
    for (i = 0; i < r; i++)
    {
        sum = 0;
        for (j = 0; j < c; j++)
        {
            sum += arr[i][j]; 
        }

        printf("Sum of %dth row = %d\n", i+1, sum);
    }
    
    // sum of columns
    for (j = 0; j < c; j++)
    {
        sum = 0;
        for (i = 0; i < r; i++)
        {
            sum += arr[i][j];
        }

        printf("Sum of %dth column = %d\n", j+1, sum);
    }
    return 0;
}