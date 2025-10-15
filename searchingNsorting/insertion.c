#include <stdio.h>

int main()
{
    int n;

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

    for (int i = 1; i < n; i++) // 0 to i-1 is sorted, i(th) is to be inserted.
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[i] < arr[j]) //Check which position to insert at.
            {
                int temp = arr[i];

                for ( int k = i - 1; k >= j; k--) //Shifting.
                {
                    arr[ k + 1] = arr[k];
                }

                arr[j] = temp;
            }
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