#include <stdio.h>

void input(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %dth element: ", i+1);
        scanf(" %d", (arr + i));
    }
}

int sum_array(int *arr, int n)
{
    int sum = 0;
    for (int i=0; i<n; i++)
    {
        sum += *(arr + i);
    }
    return sum;
}

void minmax(int *arr, int n, int *min, int *max)
{
    *min = *arr;
    *max = *arr;

    for (int i = 0; i < n; i++)
    {
        if (*(arr + i) > *max)
        {
            *max = *(arr + i);
        }

        if (*(arr + i) < *min)
        {
            *min = *(arr + i);
        }
    }
}

int main()
{
    int n;
    printf("Enter the number of elements in Array: ");
    scanf("%d", &n);

    int array[n];
    input(array, n);

    printf("Array = ");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", *(array + i));
    }

    printf("\nSum of all the elements of the array = %d\n", sum_array(array, n));
    int min, max;
    minmax(array, n, &min, &max);
    printf("Maximum of the array = %d\nMinimum of the array = %d\n", max, min);

    return 0;
}