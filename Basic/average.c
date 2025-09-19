#include <stdio.h>

int main()
{
    int a;
    int b;

    printf("Enter 2 numbers here: \n");
    scanf("%d", &a);
    scanf("%d", &b);

    int n = a+b;
    int m = n/2;
    printf("Average of both the given numbers is = %d\n", m);
}
