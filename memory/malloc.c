#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *p = malloc(5*sizeof(int));
    for (int i = 0; i < 5; i++)
    {
        scanf(" %d", (p+i));
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", *(p+i));
    }

    free(p);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", *(p+i));
    }
    return 0;
}