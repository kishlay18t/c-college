#include <stdio.h>


int main()
{
    int n;

    printf("Enter the number of elements: \n");
    scanf("%d", &n);

    if ( n < 2)
    {
        printf("Array size not suitable for second largest to exist.\n");
        return 0;
    }

    // Getting input in array
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Printing Array
    printf("Array = ");
    for (int i = 0; i < n; i++)
    {
        if ( i != n - 1)
            printf("%d, ", arr[i]);
        else
            printf("%d. \n", arr[i]);
    }

    // Finding the largest.
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if ( arr[i] > max)
        {
            max = arr[i];
        }
    }

    // Finding second largest.
    int second = -99999999;
    for (int i = 0; i < n; i++)
    {
        if ( arr[i] < max && arr[i] > second)
            second = arr[i];
    }

    if (second == -99999999)
        printf("No second largest, all are equal.\n");
    else
        printf("Second largest = %d\n", second);

    return 0;
}