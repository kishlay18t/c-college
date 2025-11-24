// Duplicate a file.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *src, *dest;

    char source_file[50], dest_file[50];

    printf("Enter the name of the source file to copy from: ");
    scanf(" %s", source_file);
    printf("Enter the name of the file to copy contents at: ");
    scanf(" %s", dest_file);

    src = fopen(source_file, "r");
    dest = fopen(dest_file, "w");

    if (src == NULL || dest == NULL)
    {
        printf("File couldn't be opened!\n");
        return 0;
    }

    int ch;
    while ((ch = fgetc(src)) != EOF)
    {
        fputc(ch, dest);
    }

    printf("Your given source file has been successfully duplicated!\n");
    
    fclose(src);
    fclose(dest);

    return 0;
}