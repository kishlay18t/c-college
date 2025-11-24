#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* fptr, *even, *odd;
    fptr = fopen("filename.txt", "r");

    even = fopen("even.txt", "a");
    odd = fopen("odd.txt", "a");

    int element;

    if (fptr == NULL)
    {
        printf("The file couldn't be opened!\n");
        return 0;
    }
    else
    {
        while (fscanf( fptr, "%d", &element) == 1)
        {
            if (element % 2 == 0)
            {
                fprintf( even, "%d", element);
                fputs(" ", even);
            }
            else
            {
                fprintf( odd, "%d", element);
                fputs(" ", odd);
            }
        }
        fclose(fptr);
        fclose(even);
        fclose(odd);
    }

    return 0;
}