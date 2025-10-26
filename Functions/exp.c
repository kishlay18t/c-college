#include <stdio.h>

int add(int a, int b); //prototype


int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", add(a,b));
    return 0;
}

int add(int a, int b) // Function
{
    return a+b;
}
