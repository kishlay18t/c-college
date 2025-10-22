## String Notes:

**Introduction**
Strings = array of characters. Ends at '\0'.
char str[50];
Input:
    Without space - scanf("%c", str); <br>
    With space - scanf("%[^\n]", str); <br>

Output:
    1. printf("%s", str); <br>
    2. for (int i = 0; str[i] != '\0'; i++) <br>
            printf("%c", str[i]);

**To remember**
1. Palindrome -- start with "count - 1" -- '\0'
2. Using frequency function to count characters: <br>
    \t int freq[256] = {0}; <br>
    \t for loop: <br>
        \t** freq[ str[i] ]++; <br>
    \t for ( i = 0 to 256 )  
        \t** if freq[ str[i] ] != 0  
        \t** printf("Frequency of %c = %d", str[i], freq[ str[i] ])

3. To remove white spaces: Copy everything except spaces to another string.
4. 'a' - 'A' = 32
5. String problems often reduce to 1 loop and logic inside -- O(n)
6. To compare 2 strings: <br>
    <t>int equal = 1 `raising a counter` <br>
    \t for loop: <br>
        \t``if any element not equal <br>
        \t\t    equal = 0 `switching counter to false`<br>

