#include <stdio.h>

long long factorial(int n) // Using long long since factorials can be really really big numbers.
{
    if (n <= 1)           // base case covers 0 and 1
        return 1;  // return 1 for the base case; so that the function doesn't keep calling itself forever.
    return (long long)n * factorial(n - 1); // This is equivalent to making n = n - 1; since n-1 gets passed to function as n everytime.

    // return statement in the recursive case makes the function call itself again until n != 1
}

int main()
{
    int n;
    if (scanf("%d", &n) != 1) return 0;
    if (n < 0) {
        printf("Undefined for negative n\n");
        return 0;
    }
    long long f = factorial(n);
    printf("%d! = %lld\n", n, f);
    return 0;
}
