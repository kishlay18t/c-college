// Multiplying 2 matrices.

#include <stdio.h>
int main()
{
    int r, c, p, q, i, j, sum;

    printf("Enter the number of rows in the 1st matrix: ");
    scanf("%d", &r);

    printf("Enter the number of columns in the 1st matrix: ");
    scanf("%d", &c);

    int array1[r][c];

    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
            printf("Enter the (%d,%d)th element of the 1st matrix: ", i + 1, j + 1);
            scanf("%d", &array1[i][j]);
        }
    }

    printf("1st Matrix = \n");
    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
            printf("%d ", array1[i][j]);
        }

        printf("\n");
    }


    printf("Enter the number of rows in the 2nd matrix: ");
    scanf("%d", &p);

    printf("Enter the number of columns in the 2nd matrix: ");
    scanf("%d", &q);

    int array2[p][q];

    for ( i = 0; i < p; i++)
    {
        for ( j = 0; j < q; j++)
        {
            printf("Enter the (%d,%d)th element of the 1st matrix: ", i + 1, j + 1);
            scanf("%d", &array2[i][j]);
        }
    }

    printf("2nd Matrix = \n");
    for ( i = 0; i < p; i++)
    {
        for ( j = 0; j < q; j++)
        {
            printf("%d ", array2[i][j]);
        }

        printf("\n");
    }


    if ( c != p )
    {
        printf("Matrix multiplication is not possible.\n");
        return 0;
    }

    for ( i = 0; i < r; i++)
    {
        sum = 0;
        for ( j = 0; j < c; j++)
        {
            count++;
            /*if (count = c)
            {
                break;
            }*/

            sum += array1[i][j]*array2[j][i];
        }
        printf("%d  ", sum);
    }
}