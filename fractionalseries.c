
// 1 - 1/2 + 1/3 - 1/4 + ... n terms

#include <stdio.h>

int main()
{
    int n,  i, dr = 1;
    float rec, sum = 0, a;

    printf("Enter the number of terms: \n");
    scanf("%d", &n);

    for ( i = 1; i <= n; i++)
    {
        a = (int)i;
        rec = 1.0/a;

        if ( i % 2 != 0)
        {
            sum += rec;
            printf("1/%d - ", i);
        }
        else
        {
            sum -= rec;
            printf("1/%d + ", i);
        }

        dr = dr*i;
    }
    
    sum = sum*dr;
    int numerator = (int)sum;

    printf(" Ans = %d/%d\n", numerator, dr);
}