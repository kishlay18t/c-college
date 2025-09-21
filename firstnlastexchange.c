// 1234 ---> 4231

#include <stdio.h>
#include <math.h>

// Defining a function to count the number of digits.
int num_dig(int num)
{
    int count = 0;
    while ( num != 0)
    {
        num = num/10;
        count++;
    }
    return count;
}


int main()
{
    int n, i, r, result = 0, m;
    float res = 0;

    scanf(" %d", &n);

    m = n;

    // Middle Part.
    for ( i = 1; i <= n; i++)
    {
        r = n % 10;
        n = n/10;

        if (i > 1)
        {
            res = 0.1f*res + r;
        }
    }
    result = (int) pow( 10, num_dig(m) - 2)*res;
    
    // First part.
    n = m;
    r = n % 10;
    result = pow( 10, num_dig(m) - 1)*r + result;

    // Last part.
    for ( i = 1; i <= n; i++)
    {

        r = n % 10;
        n = n / 10;

        if ( n < 10 )
        {
            result = result + n;
        }
    }
    printf("Answer = %d\n", result);
    return 0;
} 