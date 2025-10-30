#include <stdio.h>

void input(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %dth element: ", i+1);
        scanf(" %d", (arr + i));
    }
}

int main()
{
    int n;
    printf("Enter the number of elements in Array: ");
    scanf("%d", &n);

    int array[n];
    input(array, n);
    int arrcopy[n];

    for (int i = 0; i < n; i++)
    {
        *(arrcopy + i) = *(array + i);
    }

    return 0;
}    