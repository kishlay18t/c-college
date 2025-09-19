#include <stdio.h>
int main()
{
    int n, y, x;

    printf("Enter the height of the triangle: \n");
    scanf("%d", &n);

    for (y = n; y > 0; y--)
    {
        for (x = y; x > 0; x--)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}