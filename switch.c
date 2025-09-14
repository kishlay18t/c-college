#include <stdio.h>

int main() {

    // Switch variable
    int var;

  	scanf("%d", &var);

    // Switch statement
    switch (var) {
    case 1:
        printf("Sunday.");
        break;
    case 2:
        printf("Monday.");
        break;
    case 3:
        printf("Tuesday.");
        break;
    default:
        printf("Default case is Matched.");
        break;
    }
    return 0;
}
