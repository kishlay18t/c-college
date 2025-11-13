#include <stdio.h>
#include <stdlib.h>

struct sentence
{
    char data[100];
};



int main()
{
    struct sentence **s = NULL;

    int choice = 1, sen_count = 0;

    while (choice)
    {
        s = realloc(s, (sen_count+1)*sizeof(struct sentence*));
        s[sen_count] = malloc(sizeof(struct sentence));
        printf("Enter the %dth sentence:\n", sen_count+1);

        // Sentence input.
        scanf(" %[^\n]", s[sen_count]->data);

        // giving choice for another sentence
        sen_count++;
        printf("Keep going?(0/1) ");
        scanf(" %d", &choice);
    }


    printf("Sentence: \n");
    for (int i = 0; i < sen_count; i++)
    {
        printf("%s\n", s[i]->data);
    }

    printf("\n");

    free(s);
    return 0;
}