#include <stdio.h>
#include <stdlib.h>

struct students
{
    int id;
    float marks;
    struct students *next;
};

int main()
{
    struct students a = {01, 21.5, NULL};
    struct students b = {02, 44.6, &a};
    struct students c = {03, 98.06, &b};

    printf(" %d %.1f\n", c.next->next->id, c.next->marks);

    return 0;
}