#include <stdio.h>
int main()
{
    int i,j,r,c,k;
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

    // Maximum of column and minimum of "it's" row
    /*int max = arr[0][0], min = arr[0][0];
    for (i = 0; i < r; i++)
    {
        min = arr[i][0];
        for (j = 0; j < c; j++)
        {
            max = arr[0][j];
            if (arr[i][j] < min)
            {
                min = arr[i][j];
            }
            for (k = 0; k < r; k++)
            {
                if (arr[k][j] > max)
                {
                    max = arr[k][j];
                }
            }
            if (min == max)
                {
                    printf("Saddle point of matrix = %d\n", max);
                }
        }
    }*/    
    
    // Gotta get both min in row and max in column first, and then comparing. I'm comparing too early.
    // Improvised version.

    int found = 0; // Flag for when no saddle point is found.
    for (i = 0; i < r; i++)
    {
        // getting min of the row and storing it's column index.
        int minval = arr[i][0], colindex = 0;

        for (j = 0; j < c; j++)
        {
            if (arr[i][j] < minval)
            {
                minval = arr[i][j];
                colindex = j;
            }            
        }

        // Getting maximum value of the column we found min value of row in.
        int maxval = 0; 
        for (k = 0; k < r; k++)
        {
            if (arr[k][colindex] > maxval)
            {
                maxval = arr[k][colindex];
            }
        }

        // comparing for saddlepoint.
        if (minval == maxval)
        {
            printf("Saddle point of the matrix = %d\n", minval);
            found = 1;
        }
    }

    if (!found) 
    {
        printf("No saddle point found in the given matrix.\n");
    }

    return 0;
}