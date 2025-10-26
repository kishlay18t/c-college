#include <stdio.h>
int main()
{
    char str[300];
    printf("Input the string: \n");
    scanf("%[^\n]", str);

    int i;
    int count = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
        count++;
    }

    char substr[100];
    printf("Enter the string to search for: \n");
    scanf(" %[^\n]", substr);


    int subcount = 0;
    for (i = 0; substr[i] != '\0'; i++)
    {
        subcount++;
    }

    int found = 0, foundindex = 0;
    for (i = 0; i < count - subcount; i++)
    {
        if (str[i] == substr[0])
        {
            found = 1;
            for (int j = 0; j < subcount; j++)
            {
                if (str[i+j] != substr[j]) 
                {
                    found = 0;
                    break;
                }
            }
        }

        if (found) 
        {
            foundindex = i;
            break;
        }
    }

    if (found)
    {
        printf("substring found at '%dth' position\n", foundindex + 1);
    }
    else {printf("Sub string not found\n");}

    return 0;
}