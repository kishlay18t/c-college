#include <stdio.h>
int main()
{
    int a, b, c;
    char op;

    printf("Enter the first no: \n");
    scanf(" %d", &a);

    printf("Enter the operator(+,-,*,/): \n");
    scanf(" %c", &op);

    printf("Enter the second no: \n");
    scanf(" %d", &b);

    switch (op)
    {
        case '+':
        {
            c = a + b;
            printf("sum = %d\n", c);
            break;
        }

        case '-':
        {
            c = a - b;
            printf("difference = %d\n", c);
            break;
        }

        case '*':
        {
            c = a*b;
            printf("%d\n", c);
            break;
        }

        case '/':
        {
            if (b != 0)
            {
                c = a / b;
                printf("%d\n", c);
                break;
            }
            else
            {
                printf("Invalid!\n");
                break;
            }
            
        }

        default:
        {
            printf("Invalid input!\n");
        }
        
    }
    return 0;
}