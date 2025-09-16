// Program to write a number in it's expanded form.

#include <stdio.h>
int main()
{
    int n, place, dig;  // Defining integers being used.
    
    printf ("Enter the number: \n");  // number input
    scanf("%d", &n);

    place = 1;

    while (n > 0)  // main while loop. 
    {       
        dig = n % 10; // Taking out digits one by one

        n = n/10; // Removing the digit we have taken out already. Count will be 2 next, so second place digit.

        place = place*10; // To be multiplied with 10 for each place

        printf("%d X %d + ", dig, place);  // final printing
    }

    printf("\n");

}