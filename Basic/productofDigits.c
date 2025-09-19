#include <stdio.h>
int main()
{
    int n, r, pr = 1;
    
    printf("Enter a number: \n");
    scanf("%d", &n);

    while (n != 0)
    {
       r = n % 10;
       if (r != 0)
       {
        pr = pr * r;
       }

       n = n/10;
    }

    printf("Product of digits = %d\n", pr);
}