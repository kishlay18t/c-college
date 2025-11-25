#include <stdio.h>

int main()
{
    int r,c;

    printf("Enter the rows and column of the matrix: \n");
    scanf("%d %d", &r, &c);

    int matrix[r][c];

    printf("Input the matrix: \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter the [%d][%d]th element of the matrix: ", i+1, j+1);
            scanf(" %d", &matrix[i][j]);
        }
    }
    
    printf("Matrix: \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Transpose of the matrix.
    int matrixtr[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            matrixtr[i][j] = matrix[j][i];
        }
    }

    printf("\nTranspose of the matrix: \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", matrixtr[i][j]);
        }
        printf("\n");
    }



    return 0;
}