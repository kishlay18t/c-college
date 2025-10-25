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

    int upper = 1, lower = 1;

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if ( i > j && arr[i][j] != 0)
            {
                lower = 0;
            }
            else if ( i < j && arr[i][j] != 0)
            {
                upper = 0;
            }
        }
    }

    if (upper && lower)
    {
        printf("Diagonal matrix.");
    }
    else if(upper)
    {
        printf("Upper triangular matrix.");
    }
    else if (lower)
    {
        printf("Lower triangular matrix.");
    }
    else
    {
        printf("Neither upper nor lower triangular matrix.");
    }

    return 0;
}