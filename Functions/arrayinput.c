#include <stdio.h>

void input(int a, int arr[a])
{
    for (int i = 0; i < a; i++)
    {
        printf("Enter the '%d'th element.", i+1);
        scanf("%d", &arr[i]);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int array[n];
    input(n, array);

    for (int i = 0; i < n; i++)
    {
        printf("%d  ", array[i]);
    }
    printf("\n");
    return 0;
}