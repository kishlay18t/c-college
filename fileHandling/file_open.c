#include <stdio.h>
#include <stdlib.h>

int main()
{
    // File pointer to store the value returned by file.
    FILE* fptr;

    //opening the file in read mode.
    fptr = fopen("filename.txt", "r");

    //checking if the file is successfully opened.
    if (fptr == NULL)
        printf("The file is not opened\n");
    else
        printf("File was opened!\n");
    fclose(fptr);

    return 0;
}