#include <stdio.h>

int sumarr(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; arr[i] <= n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int arr[] = {1,2,3,4,5,6};

    // calculate the size of array.
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Sum of all elements = %d\n", sumarr(arr, n));
    return 0;
}