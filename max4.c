#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;
    int d;

    printf("Type in any 4 numbers here: \n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);

    if (a > b && a > c && a>d)
    {
        printf("%d is the maximum of all four numbers.", a);
    }
    else if (b > c && b > a && b>d)
    {
        printf("%d is the maximum of all four numbers.\n", b);
    }
    else if (c >a && c > b && c > d)
    {
        printf("%d is the maximum of all four numbers\n", c);
    }
    else
    {
        printf("%d is the maximum of all 4 numbers.\n", d);
    }
}
