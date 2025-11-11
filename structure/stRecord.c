#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct student_entry
{
    int id;
    char name[50];
    float marks;
};

int main()
{
    struct student_entry *s = NULL;
    int count = 0;

    s = realloc(s, (count+1)*sizeof(struct student_entry));
    s->id = count + 1;
    strcpy(s->name, "Kishlay Raj");
    s->marks = 93.8;
    count++;

    int query_type;
    do
    {

        printf("\t\t\t\tSelect your query type:\n\t\t\t\tAdd a student [1]\n\t\t\t\tRemove a student [2]\n\t\t\t\tShow Students List [3]\n\t\t\t\tQuit the program [4]\nYour Response: ");
        scanf("%d", &query_type);

        if (query_type == 4)    return 0;

        if (query_type == 1)
        {
            s = realloc(s, (count+1)*sizeof(struct student_entry));
            (s+count)->id = count + 1;

            printf("Enter the Student's name: ");
            scanf(" %[^\n]", (s+count)->name);

            printf("Enter the marks obtained by the student: ");
            scanf(" %f", &(s+count)->marks);
            count++;

            printf("New student ID has been successfully registered!\n");
        }
        else if (query_type == 2)
        {
            int id;
            printf("Enter the ID number of student to be removed: ");
            scanf("%d", &id);

            for (int i = id - 1; i < count; i++)
            {
                *(s+i) = *(s+i+1);
                //(s+i)->id = (s+i+1)->id;
                count--;
            }
        }
        else if (query_type==3)
        {
            printf("Student ID\t|\tName\t\t|\tMarks Obtained\n\n");
            for (int i = 0; i < count; i++)
            {
                printf("%d\t\t|\t%s     |\t%.1f\n", (s+i)->id, (s+i)->name, (s+i)->marks);
            }
        }
        else
        {
            printf("Invalid Response!");
            break;
        }

        printf("Do you have any other query?(y/n) ");
        char choice;
        scanf(" %c", &choice);
        if (choice == 'y' || choice == 'Y')
            continue;
        else 
            break;

    }while (query_type != 4);

    free(s);
    return 0;
}
