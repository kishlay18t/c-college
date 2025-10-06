#include <stdio.h>
#include <stdlib.h>


int main()
{
    int n, count = 0;
    printf("Enter the number of elements: \n");
    scanf("%d", &n);

    if ( n < 2)
    {
        printf("Array size not suitable for second largest to exist.\n");
        exit(0);
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

    // Finding second largest.
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ( arr[j] > arr[i])
            {
                count++;
            }
        }

        if ( count == 1)
        {
            printf("Second largest number = %d\n", arr[i]);
            return 0;
        }

        count = 0;
    }
    
    printf("All elements are equal.\n");
    return 0;
}



//FAILED VERSION.