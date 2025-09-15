// Program to write a number in it's expanded form.

#include <stdio.h>
int main()
{
    int n, i, count = 0, place, dig;  // Defining integers being used.
    
    printf ("Enter the number: \n");  // number input
    scanf("%d", &n);

    while (n > 0)  // main while loop. 
    {       
        dig = n % 10; // Taking out digits one by one

        n = n/10; // Removing the digit we have taken out already. Count will be 2 next, so second place digit.

        place = 1; // To be multiplied with 10 'count - 1' times

        count++; // Counter for the place of digits. Starts with 1...

        for (i = 1; i < count; i++)  // Loop for number of 0's = place of 'digit -1'
        {
            place = place*10;
        }

        printf("%d X %d + ", dig, place);  // final printing
    }

    printf("\n");

}