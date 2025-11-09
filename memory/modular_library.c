#include <stdio.h>
#include <stdlib.h>

void getpages(int shelf_number, int book_number, int *totalNumofBooks, int **totalNumofPages)
{
    printf("Total number of pages in the %dth book of %dth shelf is: %d\n", book_number, shelf_number, *(*(totalNumofPages + shelf_number - 1) + book_number - 1));
}

void addbook(int shelf_number, int numOfpages, int *totalNumofBooks, int **totalNumofPages)
{
    int idx = shelf_number - 1;
    *(totalNumofBooks + idx) += 1;
    *(totalNumofPages + idx) = realloc(*(totalNumofPages + idx), *(totalNumofBooks + idx) * sizeof(int));

    *(*(totalNumofPages + idx) + *(totalNumofBooks + idx) - 1) = numOfpages;
}

void printdata(int total_no_of_shelves, int *totalNumofBooks, int **totalNumofPages)
{
    printf("\nCurrent Data:\n");
    printf("Shelf number\tBook number\tNumber of pages\n");
    for (int i = 0; i < total_no_of_shelves; i++)
    {
        for (int j = 0; j < *(totalNumofBooks + i); j++)
        {
            printf("%d\t\t%d\t\t%d\n", i+1, j+1, *(*(totalNumofPages + i) + j));
        }
    }
}


int main()
{
    int total_no_of_shelves;

    printf("Enter the total number of shelves: ");
    scanf(" %d", &(total_no_of_shelves));

    if (total_no_of_shelves < 1)
    {
        printf("Invalid number of shelves!\n");
        return 0;
    }

    int *totalNumofBooks = malloc(total_no_of_shelves * sizeof(int));

    for (int i = 0; i < total_no_of_shelves; i++)
    {
        printf("Enter the number of books on %dth shelf: ", i+1);
        scanf(" %d", (totalNumofBooks + i));

        if (*(totalNumofBooks + i) < 0)
        {
            printf("Invalid number of books!\n");
            return 0;
        }
    }

    // Assigning memory for shelf pointers inside pages pointer --> sizeof(int*)
    int** totalNumofPages = malloc((total_no_of_shelves) * sizeof(int*));

    // Assigning memory to pointers inside pages pointer(each representing a shelf) based on the number of books on each shelf.
    for (int i = 0; i < total_no_of_shelves; i++)
    {
        *(totalNumofPages + i) = malloc( (unsigned int)*(totalNumofBooks + i) * sizeof(int));
    }

    // Takes input for number of pages.
    for (int i = 0; i < total_no_of_shelves; i++)
    {
        for (int j = 0; j < *(totalNumofBooks + i); j++)
        {
            printf("Enter the number of pages in %dth book on %dth shelf: ", i+1, j+1);
            scanf(" %d", (*(totalNumofPages + i) + j));
        }
    }

    //Print current data
    printf("\nCurrent Data:\n");
    printf("Shelf number\tBook number\tNumber of pages\n");
    for (int i = 0; i < total_no_of_shelves; i++)
    {
        for (int j = 0; j < *(totalNumofBooks + i); j++)
        {
            printf("%d\t\t%d\t\t%d\n", i+1, j+1, *(*(totalNumofPages + i) + j));
        }
    }

    char choice;
    printf("Do you have a query?(y/n) ");
    scanf(" %c", &choice);

    int queryType;
    while (choice == 'y' || choice == 'Y')
    {
        printf("What type of query do you have?(1,2 or 3):  ");
        scanf(" %d", &queryType);

        if (queryType != 1 && queryType != 2 && queryType != 3)
        {
            printf("Invalid query type. input 1 to continue or 0 to exit:[0,1] ");
            if (scanf(" %d", &queryType) == 0)  return 0;
            else if (queryType == 1)    continue;
        }
        else
        {
            if (queryType == 1)
            {
                int shelf_number, numOfpages;
                printf("Enter the shelf number to add the book at: ");
                scanf(" %d", &shelf_number);

                printf("Enter the number of pages in the new book: ");
                scanf(" %d", &numOfpages);

                addbook(shelf_number, numOfpages, totalNumofBooks, totalNumofPages);
                printf("\nYour book has been successfully updated in the library!\n");

                printdata(total_no_of_shelves, totalNumofBooks, totalNumofPages);
            }
            else if (queryType == 2)
            {
                int shelf_number, book_number;
                printf("Enter the shelf number: ");
                scanf(" %d", &shelf_number);
                printf("Enter the book number: ");
                scanf(" %d", &book_number);

                getpages(shelf_number, book_number, totalNumofBooks, totalNumofPages);
            }
            
        }

        printf("Do you wish to continue?(y/n) ");
        scanf(" %c", &choice);
    }

    return 0;
}