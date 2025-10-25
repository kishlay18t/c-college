#include <stdio.h>
int main()
{
    int i,j,r1,c1;
    printf("Enter the Dimensions 1st matrix:");

    printf("\nRows: ");
    scanf("%d", &r1);


    printf("Column: ");
    scanf(" %d", &c1);

    int arr1[r1][c1];
    
    //Input matrix
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            printf("Enter the [%d,%d]th element: ", i+1, j+1);
            scanf("%d", &arr1[i][j]);
        }
    }

    // Print Matrix
    printf("Matrix 1: \n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            printf("%d  ", arr1[i][j]);
        }

        printf("\n");
    }

    int r2,c2;
    printf("Enter the Dimensions of the 2nd matrix:");

    printf("\nRows: ");
    scanf("%d", &r2);


    printf("Column: ");
    scanf(" %d", &c2);

    int arr2[r2][c2];
    
    //Input matrix
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("Enter the [%d,%d]th element: ", i+1, j+1);
            scanf("%d", &arr2[i][j]);
        }
    }

    // Print Matrix
    printf("Matrix 2: \n");
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("%d  ", arr2[i][j]);
        }

        printf("\n");
    }

    if (r1 != r2 || c1!=c2)
    {
        printf("Matrix addition not possible.");
        return 0;
    }

    // Addition of both matrices.
    int arrSum[r1][c1];

    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            arrSum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    printf("\nAddition matrix: \n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            printf("%d  ", arrSum[i][j]);
        }

        printf("\n");
    }
    return 0;

}