#include <stdio.h>

int main()
{
    FILE* fptr;

    char str[50];
    printf("Write into the file: ");
    scanf("%[^\n]", str);
    const char *str1 = str;

    fptr = fopen("file.txt", "a");

    if (fptr == NULL)
    {
        printf("File was not opened!\n");
        return 0;
    }
    else
    {
        fputs(str1, fptr);
        fputs("\n", fptr);
        printf("String has successfully been written into the file!\n");
    }

    fclose(fptr);
    return 0;
}