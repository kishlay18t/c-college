#include <stdio.h>
#include <limits.h>

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

    // Initialising variables for first and second largest numbers.
    int first = INT_MIN, second = INT_MIN;

    
    for (int i = 0; i < n; i++)
    {
        if ( arr[i] > first )
        {
            second = first;
            first = arr[i];
        }
        if ( arr[i] < first && arr[i] > second)
        {
            second = arr[i];
        }
    }

    if ( second == INT_MIN)
    {
        printf("All elements are equal.\n");
        return 0;
    }

    printf("Max = %d \nSecond max = %d\n", first, second);
    return 0;
}