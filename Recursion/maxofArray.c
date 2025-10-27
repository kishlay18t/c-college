#include <stdio.h>

int max(int n, int array[n])
{
    if (n == 1)
    {
        return array[0];
    }
    
    int tempMax = max(n - 1, array);
    if (tempMax < array[n - 1])
    {
        tempMax =  array[n-1];
    }

    return tempMax;
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

    printf("Maximum of the array = %d\n", max(n, array));
    return 0;
}