#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* fptr;

    fptr = fopen("file.txt", "w");

    if (fptr == NULL)
        printf("File did not open.\n");
    else
        printf("File created successfully!\n");

    return 0;
}
