// 1 + 1/2! + 1/3!...n terms.

#include <stdio.h>
int main()
{
    int n, j, fact, i, dr = 1;
    float sum = 0, a, reci;
    printf("Enter the number of terms: \n");
    scanf("%d", &n);

    for ( i = 1; i <= n; i++)
    {
        fact = 1;
        // taking factorial 
        for ( j = 1; j <= i; j++)
        {
            fact = fact*j;
        }

        // reciprocal of factorial = term
        a = (float)fact;
        reci = 1.0/a;
        sum = sum + reci;

        // term printing
        printf("1/%d! ", i);
        if ( i < n)
        {
            printf("+ ");
        }

        dr = dr*fact;
    }

    sum = sum*dr;
    int Nr = (int)sum;

    printf("\n = %d/%d\n", Nr, dr);
}