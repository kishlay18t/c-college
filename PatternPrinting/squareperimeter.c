#include <stdio.h>
 
 int main() 
 {
 
    int n;
    scanf("%d", &n);
    int m = n, p = m;
 
    for (int j = 0; j < m; j++)
    {
        for (int i = 0; i < m; i++)
        {
            printf("%d ", n);
            if (n - j < n - i)
            {
                n --;
            }
        }
 
        int q = p, diff = m - q;
 
        for (int i = m - 2; i >= 0; i--)
        {
            printf("%d ", q);
            if (q < m && i <= diff)
                q++;
        }
        if (p > 2)
        p--;
 
        n = m;
        printf("\n");
    }
 
    p = 2;
    for (int j = 0; j < m - 1; j++)
    {
        for (int i = 0; i < m; i++)
        {
            printf("%d ", n);
            if (n > p)
                n--;
        }
 
        int q = p;
        int diff = m - p;
        for (int i = m - 2; i >= 0; i--)
        {
            printf("%d ", q);
            if (q < m && i <= diff)
            {
                q++;
            }
        }
 
        n = m;
        if (p < m)
            p++;
        printf("\n");
    }

    return 0;
 }