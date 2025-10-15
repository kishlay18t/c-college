#include <stdio.h>

int main()
{
    int n, k;

    printf("Enter the size of the data: \n");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter the %dth element: ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("Array = ");
    for (int i = 0; i < n; i++)
    {
        if ( i != n - 1)
            printf("%d, ", arr[i]);
        else
            printf("%d. ", arr[i]);
    }


    printf("\n");

    for (int i = 0; i < n; i++)
    {
        int min = arr[i]; // Reset minimum.
        k = -1; // Resset swap.

        // Loop to find minimum. -- Selection
        for (int j = i; j < n; j++)
        {
            if (arr[j] < min)
            {
                min = arr[j];
                k = j;
            }   
        }

        // swapping.
        if ( k != -1 )
        {
            int temp = arr[i];
            arr[i] = min;
            arr[k] = temp;
        }
    }

    printf("Sorted Array = ");
    for (int i = 0; i < n; i++)
    {
        if ( i != n - 1)
            printf("%d, ", arr[i]);
        else
            printf("%d. ", arr[i]);
    }

    printf("\n");

    return 0;
}