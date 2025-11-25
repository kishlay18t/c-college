#include <stdio.h>

int main()
{
    int r1, c1;
    int r2, c2;

    printf("Enter the number of rows and columns in 1st matrix: \n");
    scanf(" %d", &r1);
    scanf(" %d", &c1);

    printf("Enter the number of rows and columns in 2nd matrix: \n");
    scanf(" %d", &r2);
    scanf(" %d", &c2);

    int matrix1[r1][c1];
    int matrix2[r2][c2];

    if (c1 != r2)
    {
        printf("Matrix multiplication not possible!\n");
        return 0;
    }

    //input and output 1st matrix.
    printf("Input 1st matrix.\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("Enter the [%d][%d]th element: ", i+1, j+1);
            scanf(" %d", &matrix1[i][j]);
        }
    }

    printf("1st matrix: \n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("%d ", matrix1[i][j]);
        }
        printf("\n");
    }


    // Input and print 2nd matrix.
    printf("Input 2nd matrix.\n");
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("Enter the [%d][%d]th element: ", i+1, j+1);
            scanf(" %d", &matrix2[i][j]);
        }
    }

    printf("2nd matrix: \n");
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("%d ", matrix2[i][j]);
        }
        printf("\n");
    }

    
    printf("Multiplied matrix: \n");

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            int el = 0;
            for (int k = 0; k < c1; k++)
            {
                el += matrix1[i][k] * matrix2[k][j];
            }
            printf("%d ", el);
        }
        printf("\n");
    }

    return 0;
}