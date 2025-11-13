#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    char c, str[50], sen[100];
    scanf("%c", &c);
    scanf(" %[^\n]", str);
    scanf(" %[^\n]", sen);
    
    printf("%c\n%s\n%s", c, str, sen);
    
    return 0;
}