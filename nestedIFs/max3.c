#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;

    printf("Type in any 3 numbers here: \n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if (a > b && a > c)
    {
        printf("%d is the maximum of all three numbers.", a);
    }
    else if (b > c && b > a)
    {
        printf("%d is the maximum of all three numbers.\n", b);
    }
    else
    {
        printf("%d is the maximum of all three numbers\n", c);
    }
}


