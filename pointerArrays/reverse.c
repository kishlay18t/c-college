#include <stdio.h>

int main()
{
    int i,n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int array[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter the %dth element: ", i+1);
        scanf("%d", (array + i));
    }

    printf("Array = ");
    for (i = 0; i < n; i++)
    {
        printf("%d  ", *(array + i));
    }
    printf("\n");

    printf("Reverse of the array = ");
    for (i = n-1; i >= 0; i--)
    {
        printf("%d  ", *(array + i));
    }
    printf("Array = ");
    return 0;
}