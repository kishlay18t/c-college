#include <stdio.h>
int main()
{
    int n;

    printf("Enter the number of elements in the array; \n");
    scanf(" %d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf(" %d", &arr[i]);
    }

    int revarr[n];

    for (int i = 0; i < n; i++)
    {
        revarr[i] = arr[(n - 1) - i];
    }

    printf("Array = ");
    for (int i = 0; i < n; i++)
    {
        if ( i != n - 1)
            printf("%d, ", arr[i]);
        else
            printf("%d. ", arr[i]);
    }

    printf("Reversed Array = ");
    for (int i = 0; i < n; i++)
    {
        if ( i != n - 1)
            printf("%d, ", revarr[i]);
        else
            printf("%d. ", revarr[i]);
    }

    printf("\n");
    return 0;
}