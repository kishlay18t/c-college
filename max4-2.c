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

    if (a > b)
    {
            if (a > c)
            {
                if (a > d)
                {
                    printf("%d is the maximum of all 4 numbers.\n", a);
                }
                else
                {
                    printf("%d is the maximum of all 4 numbers.\n", d);
                }
            }

            else
            {
                if (c > d)
                {
                    printf("%d is the maximum of all 4 numbers.", c);
                }
                else
                {
                    printf("%d is the maximum of all 4 numbers.", d);
                }

            }
    }
    else
    {
        if (b > c)
        {
            if (b > d)
            {
                    printf("%d in the maximum of all 4 numbers.\n", b);
            }
            else
            {
                printf("%d is the maximum of all 4 numbers.\n", d);

            }
        }
        else
        {
            if (c > d)
            {
                printf("%d is the maximum of all 4 numbers.", c);
            }
            else
            {
                printf("%d is the maximum of all 4 numbers.", d);
            }
        }
    }
    return 0;
}
