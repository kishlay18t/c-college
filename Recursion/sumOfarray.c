#include <stdio.h>

int sum(int n, int array[n])
{
    if (n == 1)
    {
        return array[0];
    }
    return array[n - 1]+sum(n - 1, array);
}

int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf(" %d", &n);

    int array[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %dth element: ", i+1);
        scanf(" %d", &array[i]);
    }

    printf("Array = ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\nSum of all elements of the array = %d\n", sum(n, array));
    return 0;
}