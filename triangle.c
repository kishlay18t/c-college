#include <stdio.h>
int main()
{
    int a, b, c;

    printf("Enter the 3 sides of the triangle\n");
    scanf("%d%d%d", &a, &b, &c);

    if (a == b)
    {
        if (a == c)
        {
            printf("Equilateral triangle.\n");
        }
        else
        {
            printf("Isosceles triangle\n");
        }
    }
    else
    {
        if (a == c || b == c)
        {
            printf("Isosceles triangle\n");
        }
        else
        {
            printf("Scalen triangle\n");
        }
    }
}
