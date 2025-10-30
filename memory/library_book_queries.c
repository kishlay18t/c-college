#include <stdio.h>
#include <stdlib.h>

int main()
{
    int total_no_of_shelves;
    printf("Input the total number of shelves : ");
    scanf("%d", &total_no_of_shelves);

    // Allocate memory for the number of books per shelf
    int *totalNumofBooks = malloc(total_no_of_shelves * sizeof(int));
    for (int i = 0; i < total_no_of_shelves; i++)
    {
        printf("Enter the number of books on the %dth shelf: ", i+1);
        scanf(" %d", (totalNumofBooks + i));
    }

    // Allocate memory for the 2D array (pages in each book)
    int** totalNumofPages = malloc(total_no_of_shelves * sizeof(int*));

    for (int i = 0; i < total_no_of_shelves; i++)
    {
        // Each shelf has a dynamic array of books
        *(totalNumofPages + i) = malloc(((unsigned int) *(totalNumofBooks + i)) * sizeof(int));
    }

    // Fill in page numbers for each book
    for (int i = 0; i < total_no_of_shelves; i++)
    {
        for (int j = 0; j < *(totalNumofBooks + i); j++ )
        {
            printf("Enter the number of pages in %dth Book on %dth shelf: ", j+1, i+1);
            scanf(" %d", (*(totalNumofPages + i) + j));
        }
    }

    // Print initial data
    printf("\nCurrent data: \n");
    printf("Shelf Number\t|Book Number\t|Number of pages\n\n");
    for (int i = 0; i < total_no_of_shelves; i++)
    {
        for (int j = 0; j < *(totalNumofBooks + i); j++ )
        {
            printf("%d\t|%d\t|%d\n", i+1, j+1, *(*(totalNumofPages + i) + j));
        }
    }

    char choice;
    printf("Do you have a query?(y/n) \n");
    scanf(" %c", &choice);

    int queryType;
    while (choice == 'y' || choice == 'Y')
    {
        printf("\n\nWhich type of query do you have? (1,2 or 3): ");
        scanf("%d", &queryType);

        if (queryType == 1)
        {
            // ✅ QUERY 1: Add a new book to an existing shelf
            int shelf_number, numberOfpages;
            printf("Enter the shelf number to add the book to: ");
            scanf(" %d", &shelf_number);
            printf("Enter the number of pages of the book: ");
            scanf(" %d", &numberOfpages);

            // ⚠️ Important: convert shelf_number (1-indexed) to array index (0-indexed)
            int idx = shelf_number - 1;

            // Increase the book count for that shelf
            *(totalNumofBooks + idx) += 1;

            // ⚠️ realloc(): first argument = pointer to resize, second = new memory size
            *(totalNumofPages + idx) = realloc(*(totalNumofPages + idx), (*(totalNumofBooks + idx))  * sizeof(int));

            // Store the new book’s pages at the new last position
            *(*(totalNumofPages + idx) + *(totalNumofBooks + idx) - 1) = numberOfpages;

            // Print updated info
            printf("\nUpdated Data: \n");
            printf("Shelf Number\t|Book Number\t|Number of pages\n\n");
            for (int i = 0; i < total_no_of_shelves; i++)
            {
                for (int j = 0; j < *(totalNumofBooks + i); j++ )
                {
                    printf("%d\t|%d\t|%d\n", i+1, j+1, *(*(totalNumofPages + i) + j));
                }
            }
        }
        else if (queryType == 2)
        {
            // ✅ QUERY 2: Find number of pages in a specific book
            int shelf_number, bookNumber;
            printf("Enter the shelf number: ");
            scanf(" %d", &shelf_number);
            printf("Which book you want the number of pages of? ");
            scanf(" %d", &bookNumber);

            // ⚠️ Adjust for 0-indexing (subtract 1)
            printf("\nNumber of pages in %dth book of %dth shelf = %d\n",
                   bookNumber, shelf_number,
                   *(*(totalNumofPages + shelf_number - 1) + bookNumber - 1));
        }
        else if (queryType == 3)
        {
            // ✅ QUERY 3: Find how many books are on a given shelf
            int shelf_number;
            printf("Enter the shelf number to check: ");
            scanf(" %d", &shelf_number);

            // ⚠️ Adjusted for 0-indexing again
            printf("\nNumber of books on %dth shelf = %d\n",
                   shelf_number, *(totalNumofBooks + shelf_number -1));
        }

        printf("Do you have any other query?(y/n) ");
        scanf(" %c", &choice);
    }

    return 0;
}
