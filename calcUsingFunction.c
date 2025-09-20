// Using functions, do-while loop and switch for a basic calculator.

#include <stdio.h>
#include <stdlib.h>

void input(int *a, int *b)
{
    
    printf("Enter the first number: \n");
    scanf("%d", a);

    printf("Enter the second number: \n");
    scanf("%d", b);
}

int main()
{
    // Variable declaration
    char op, choice;
    int c = 0, d = 0;

    do
    {
        // Initial user interface
        printf("\t\t\t\t\t MENU\n");
        printf("\t\t\t\t Operator options: \n");
        printf("\t\t\t\t Addition'+'\n");
        printf("\t\t\t\t Substraction'-'\n");
        printf("\t\t\t\t Multiplication'*'\n");
        printf("\t\t\t\t Division'/'\n");
        printf("\t\t\t\t Exit'0' \n");
        scanf("%c", &op);

        switch (op)
        {
            case '+': 
            {
                input(&c, &d);
                printf("Sum = %d\n", c + d);
                break;
            }
            case '-':
            {
                input(&c, &d);
                printf("Difference = %d\n", c - d);
                break;
            }
            case '*':
            {
                input(&c, &d);
                printf("Product = %d\n", c*d);
                break;
            }
            case '/':
            {
                input(&c, &d);
                float e = 1.0f/d * c;
                printf("Division = %f\n", e);
                break;
            }
            case '0': 
            {
                exit(0);
                break;
            }

            default:
            {
                printf("Invalid response!");
                continue;
            }
        }
        printf("Do you wish to continue? (y/n): ");
        scanf(" %c", &choice);

    }while ( choice == 'y' || choice == 'Y' );
}