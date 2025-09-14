#include<stdio.h>
int main()
{
    int a;

    printf("Type in a number here: \n");
    scanf("%d", &a);

    int rem = 0;
    int sum = 0;
    int a1 = a;


    while (a != 0)
    {
        rem = a % 10;
        sum = sum + rem;
        a = a/10;
    }

    printf("%d is the sum of all digit of %d\n", sum, a1);
}
