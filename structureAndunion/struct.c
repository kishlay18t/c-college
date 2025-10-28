#include <stdio.h>

struct myStructure
{
    int myNum;
    char myLetter;
};

int main()
{
    struct myStructure S1;
    struct myStructure S2;

    S1.myNum = 12;
    S1.myLetter = 'A';

    S2.myNum = 28;
    S2.myLetter = 'B';

    printf("Sum = %d\n", S1.myNum + S2.myNum);
    printf("%c%c\n", S1.myLetter, S2.myLetter);

    return 0;
}