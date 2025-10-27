#include <stdio.h>

int min(int n, int array[n])
{
    if (n == 1)
    {
        return array[0];
    }

    int tempMin = min(n-1, array);
    if (array[n-1] < tempMin)
    {
        tempMin = array[n-1];
    }

    return tempMin;
}

int main() 
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

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
    printf("\n");

    printf("Minimum of the array = %d\n", min(n, array));
    return 0;
}