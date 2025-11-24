#include <stdio.h>

int main()
{
    char str[50];

    FILE* fptr = fopen("file.txt", "r+");

    if (fptr == NULL)
        printf("File could not open dut to some error!\n");
    else
    {
        while (fgets(str, 50, fptr) != NULL)
        {
            printf("%s", str);
        }

        fclose(fptr);
    }
    printf("\n");
    return 0;
}