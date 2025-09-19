#include <stdio.h>
int main()
{
    int n, i, sum = 0, j;

    printf("Enter the number of terms: \n");
    scanf("%d", &n);

    for ( i = 1; i <= n; i++)
    {
        printf("(");
        for ( j = 1; j <= i; j++)
        {
            sum += j;
            
            if ( i != 1 && j < i)
                printf(" %d + ", j);
            else
                printf(" %d ", j);
        }
        printf(") + ");
    }

    printf("Ans = %d\n", sum);

    return 0;
}