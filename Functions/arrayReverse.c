#include <stdio.h>

void reverse(int arraysize, int array[arraysize])
{
    int temp;
    for (int i = 0; i < arraysize/2; i++)
    {
        temp = array[arraysize - 1 - i];
        array[arraysize - 1 - i] = array[i];
        array[i] = temp;
    }
}

int main()
{
    int n;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %dth element: ", i+1);
        scanf(" %d", &arr[i]);
    }

    printf("Array = ");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", arr[i]);
    }
    printf("\n");

    reverse(n, arr);
    printf("Reversed array = ");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", arr[i]);
    }
    printf("\n");
    return 0;

}