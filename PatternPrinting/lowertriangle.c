#include <stdio.h>
int main()
{
    int n, x, y;

    printf("Enter the height of the triangle: \n");
    scanf("%d", &n);

    for (y = 0; y < n; y++)
    {
        for (x = 0; x <= y; x++)
        {
            printf("* ");
        }
        printf("\n");
    }
}