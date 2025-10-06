#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n;
    bool  a = false, b = false;

    printf("Enter the number of elements in the array; \n");
    scanf(" %d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf(" %d", &arr[i]);
    }

    printf("Array = ");
    for (int i = 0; i < n; i++)
    {
        if ( i != n - 1)
            printf("%d, ", arr[i]);
        else
            printf("%d. ", arr[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        if ( arr[i] > arr[i + 1])
            a = true;
        if ( arr[i] < arr[i+1])
            b = true;
    }
    
    if ( a && b )
    {
        printf("\nUnsorted");
    }
    else
    {
        printf("\nSorted");
    }

    printf("\n");
    return 0;
}