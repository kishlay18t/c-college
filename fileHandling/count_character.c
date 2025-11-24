#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *src;

    char filename[50];
    printf("Enter the name of the file: ");
    scanf(" %s", filename);
    
    src = fopen(filename, "r");

    if (src == NULL)
    {
        printf("File could not be opened!\n");
        return 0;
    }

    int count = 0;
    while (fgetc(src) != EOF)
    {
        count++;
    }

    printf("Total number of character in the provided source file = %d\n", count);
    fclose(src);
    return 0;
}