#include <stdio.h>

int main()
{
    int n, m, j;

    printf("Enter the size of the array: \n");
    scanf("%d", &n);

    int arr[n];

    //Input the elements of the array
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %dth element: ", i);
        scanf("%d", &arr[i]);
        printf("\n");
    }

    //To search.
    printf("Enter the element to search for: ");
    scanf("%d", &m);

    //Print array.
    printf("Array = ");
    for (int i = 0; i < n; i++)
    {
        if ( i != n-1)
        {
            printf("%d, ", arr[i]);
        }
        else
        {
            printf("%d.", arr[i]);
        }
    }

    printf("\n");

    //Insertion Sorting.
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        for ( j = i-1; j >= 0; j--)
        {
            if (arr[j] < temp)
            {
                break;
            }
            else
            {
                arr[j + 1] = arr[j];
            }
        }

        arr[j+1] = temp;
    }

    //printing sorted array.
    printf("Sorted array = ");
    for (int i = 0; i < n; i++)
    {
        if ( i != n-1)
        {
            printf("%d, ", arr[i]);
        }
        else
        {
            printf("%d.", arr[i]);
        }
    }

    //Binary Search.
    int search = -99999;
    int low = 0, high = n-1, mid;

    while (low <= high)
    {
        mid = (low + high)/2;
        search = arr[mid];

        if (search > m)
        {
            high = mid -1;
        }
        else
        {
            low = mid + 1;
        }
    }

    printf("Found at %dth position.", mid + 1);
}