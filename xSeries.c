// 1 - x + x^2/2 - x^3/3...n terms!

#include <stdio.h>
#include <math.h>

int main()
{
    // defining variables.
    int n, i, x, dr = 1;
    float sum = 1, term;

    printf("Enter the number of terms: \n");
    scanf(" %d", &n);

    printf("Enter the number for the series: \n");
    scanf(" %d", &x);

    // 1st term of the series.
    printf("1 ");

    // main logic loop
    for ( i = 1; i < n; i++)
    {
        // numerator for the term.
        double pow1 =  pow((double) x,(double) i);

        // getting the term.
        term = (1.0f/i)*pow1;

        // odd-even if-else block
        if ( i % 2 != 0)
        {
            sum = sum - term;
            printf("- (%d^%d/%d) ", x, i, i);
        }

        else
        {
            sum = sum + term;
            printf("+ (%d^%d/%d)\n) ", x, i, i);
        }

        // denominator of the answer
        dr = dr*i;
    }
    // Turning sum into numerator/denominator format
    sum = sum*dr;

    int nr = (int) sum;

    printf("Ans = %d/%d\n", nr, dr);
    return 0;
}