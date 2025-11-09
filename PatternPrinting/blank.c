#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *a = malloc(3*sizeof(int));
    for (int i = 0; i < 3; i++)
    {
        *(a+i) = i+1;
    }

    int **b = &a;

    for (int i = 0; i < 3; i++)
    {
        *(*b+i) *= 2;
    }

    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", *(*b+i));
    }


    
    free(a);
    return 0;
}