#include <stdio.h>

int main()
{
    int n, temp;

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

    /*for (int i = 0; i < n; i++)   --My version
    {
        for (int j = 0; j <= i; j++)
        {
            if (arr[j] > arr[j+1] && j!= (n-1))
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j + 1] = temp;
            }
        }
    }*/

    for (int i = 0; i < n - 1; i++) {    // Optimized version.
    int swapped = 0;   // flag

    for (int j = 0; j < n - 1 - i; j++) 
    {
        if (arr[j] > arr[j + 1]) {
            // swap
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;

            swapped = 1; // mark that we did a swap
        }
    }

    // if no swaps happened in this pass, array is already sorted
    if (swapped == 0) {
        break;
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
}