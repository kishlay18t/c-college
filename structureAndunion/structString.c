#include <stdio.h>
#include <string.h>

struct myStructure
{
    int myNum;
    char myString[50];
};

int main()
{
    struct myStructure s1;
    
    strcpy(s1.myString, "Hello"); //must use strcpy to assign.
    printf("string = %s\n", s1.myString);

    // strcpy not necessary when assining everything of structure at once.
    struct myStructure s2 = {20, "My name"};

    printf("string = %s %d\n", s2.myString, s2.myNum);
}