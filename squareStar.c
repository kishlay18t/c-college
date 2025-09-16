#include <stdio.h>
int main()
{
    int n, x, y;

    printf("Enter the side of the square: \n");
    scanf("%d", &n);

    for (y = 0; y < n; y++)
    {
        for (x = 0; x < n; x++)
        {
            printf("* ");
        }
        printf("\n");
    }
}