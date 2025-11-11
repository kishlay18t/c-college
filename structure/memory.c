#include <stdio.h>
#include <stdlib.h>

struct student
{
    int id;
    float marks;
};

int main()
{
    struct student *s = malloc(2* sizeof(struct student));

    (*s).id = 1; (*s).marks = 86.7;
    (*(s+1)).id = 2; (*(s+1)).marks = 54.4;

    s = realloc(s, 3*sizeof(struct student));
    (*(s+2)).id = 3; (*(s+2)).marks = 39.8;

    for (int i = 0; i < 3; i++)
    {
        printf("student %d - Id: %d, Marks = %.1f\n", i+1, (s+i)->id,(s+i)->marks);
    }

    return 0;
}