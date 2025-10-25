#include <stdio.h>
int main()
{
    int i,j,r,c;
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
    printf("Matrix : \n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d  ", arr[i][j]);
        }

        printf("\n");
    }

    // Transpose.
    int arrtr[c][r];

    printf("Transpose matrix: \n");
    for (i = 0; i < c; i++)
    {
        for (j = 0; j < r; j++)
        {
            arrtr[i][j] = arr[j][i];
            printf("%d  ", arrtr[i][j]);
        }

        printf("\n");
    }
    return 0;
}