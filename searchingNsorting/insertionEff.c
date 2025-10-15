#include <stdio.h>

int main()
{
    int n, j;

    printf("Enter the size of the data: \n");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) //Input array.
    {
        printf("Enter the %dth element: ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("Array = "); //Printing array.
    for (int i = 0; i < n; i++)
    {
        if ( i != n - 1)
            printf("%d, ", arr[i]);
        else
            printf("%d. ", arr[i]);
    }

    printf("\n");

    for (int i = 1; i < n; i++) // 0 to i-1 is sorted, i(th) is to be inserted.
    {
        int temp = arr[i];

        for ( j = i-1; j >= 0; j--)   //Shifting continuously until the element being shifted (arr[j]) is smaller the element to be inserted ( arr[i] ).
        {
            if (arr[j] < temp)
            {
                break;
            }
            else
            {
                arr[ j + 1 ] = arr[j];
            }
        }

        arr[j+1] = temp; // Swapping after shifting. Dry run 4, 3, 1, 2 for better understanding.
    }

    printf("Sorted Array = ");
    for (int i = 0; i < n; i++) // Printing sorted array
    {
        if ( i != n - 1)
            printf("%d, ", arr[i]);
        else
            printf("%d. ", arr[i]);
    }

    printf("\n");

    return 0;
}