// Printing only the 1st digi.

#include <stdio.h>
int main()
{
    int n = 2234;
    while ( n >= 10)
    {
        n = n/10;
    }
    printf("%d\n", n);
}