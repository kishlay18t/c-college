#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp1, *fp2, *merge;

    char f1[50], f2[50], fmerge[50];

    printf("Enter the name of 1st file: ");
    scanf(" %s", f1);

    printf("Enter the name of 2nd file: ");
    scanf(" %s", f2);

    printf("Enter the name of the file to merge these 2 into: ");
    scanf(" %s", fmerge);

    fp1 = fopen(f1, "r");
    fp2 = fopen(f2, "r");

    merge = fopen(fmerge, "w");

    if (fp1 == NULL || fp2 == NULL || merge == NULL)
    {
        printf("Your file could not be opened!\n");
        return 0;
    }

    int ch;
    while ((ch = fgetc(fp1)) != EOF)
    {
        fputc(ch, merge);
    }

    while ((ch = fgetc(fp2)) != EOF)
    {
        fputc(ch, merge);
    }

    printf("Both of the provided source files have been merged into one successfully!\n");
    fclose(fp1);
    fclose(fp2);
    fclose(merge);
    return 0;
}