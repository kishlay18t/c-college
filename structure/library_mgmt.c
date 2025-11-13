#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct library
{
    int id;
    char title[100];
    char author[100];
    int is_issued; // 1 -- Issued, 0 -- Available.
};

int main()
{
    struct library **book = NULL;
    int count = 0;
    
    book = realloc(book, (count + 1)*sizeof(struct library *));
    *(book + count) = malloc(sizeof(struct library));
    book[0]->id = count + 1;
    strcpy(book[0]->title, "book 1");
    strcpy(book[0]->author, "Author 1");
    book[0]->is_issued = 0;
    count++;

    while (1)
    {
        int query_type;
        printf("\t\tSelect your query type:\n\t\t[1] ADD BOOK\n\t\t[2] REMOVE BOOK\n\t\t[3] SHOW BOOK LIST\n\t\t[4] SEARCH BY ID\n\t\t[5] ISSUE BOOK\n\t\t[6] RETURN BOOK\n\t\t[7] QUIT PROGRAM\nYour Response: ");
        scanf(" %d", &query_type);

        if (query_type == 7)    break;

        if (query_type == 1) //add a book
        {
            book = realloc(book, (count + 1)*sizeof(struct library *));
            book[count] = malloc(sizeof(struct library));
            
            book[count]->id = count + 1;
            printf("Enter the title: ");
            scanf(" %[^\n]", book[count]->title);
            printf("Enter the Author's name: ");
            scanf(" %[^\n]", book[count]->author);
            book[count]->is_issued = 0;

            count++;
        }
    }


    for (int i = 0; i < count; i++)
    {
        free(book[i]);
    }
    free(book);
}