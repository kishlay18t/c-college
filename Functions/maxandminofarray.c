#include <stdio.h>

void minmax(int n, int arr[n], int* min, int* max)
{
    *min = arr[0];
    *max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > *max)
        {
            *max = arr[i];
        }

        if (arr[i] < *min)
        {
            *min = arr[i];
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int array[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter the '%d'th element.", i+1);
        scanf("%d", &array[i]);
    }

    printf("Array = ");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", array[i]);
    }
    printf("\n");

    int a, b;
    minmax(n, array, &a, &b);
    printf("Minimun and maximum of the array is %d and %d respectively.", a, b);
    printf("\n");
    return 0;
}