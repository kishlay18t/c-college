// program for finding leap year.

#include <stdio.h>
int main()
{
    int a;

    printf("Enter the grade of the student: (Range: 0 to 100)\n");
    scanf("%d", &a);

    if (a <= 100 && a > 90)
        printf("A grade");
    else if ((a <= 90 && a > 80)
        printf("B grade");
    else if (a <= 80 && a > 70)
        printf("C grade");
    else if (a <= 70 && a > 60)
        printf("D grade");
    else if (a <= 60 && a > 50)
        printf("E grade");
    else if (a <= 50 && a > 40)
        printf("F grade");
    else if (a <= 40 && a > 30)
        printf("G grade");
    else if (a <= 30 && a > 20)
        printf("H grade");
    else if (a <= 20 && a > 10)
        printf("I grade");
    else if (a <= 20 && a > 10)
        printf("J grade");
        return 0;
}
