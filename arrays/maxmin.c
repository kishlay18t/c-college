#include <stdio.h>

void maxmin(int arr[],int size , int* max, int* min)
{
    //int max = 0, min = arr[0];
    for (int i = 0; i <= size; i++)
    {
        if (arr[i] > *max)
        {
            *max = arr[i];
        }
    }
    for ( int i = 0; i < size; i++)
    {
        if (arr[i] < *min)
        {
            *min = arr[i];
        }
    }
}



int main()
{
    int n, a = 0, b;

    printf("Enter the size of the Array: \n");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
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

    b = *arr;

    maxmin(arr, n, &a, &b);

    printf("\n Max = %d\n Min = %d\n", a, b);

    return 0;
}