## String Notes:

**Introduction**
Strings = array of characters. Ends at '\0'.
char str[50];
Input:
    Without space - scanf("%c", str);
    With space - scanf("%[^\n]", str);

Output:
    1. printf("%s", str);
    2. for (int i = 0; str[i] != '\0'; i++)
            printf("%c", str[i]);

**To remember**
1. Palindrome -- start with "count - 1" -- '\0'
2. Using frequency function to count characters:
    int freq[256] = {0};
    for loop:
        freq[ str[i] ]++;
    for ( i = 0 to 256 )
        if freq[ str[i] ] != 0
            printf("Frequency of %c = %d", str[i], freq[ str[i] ])

3. To remove white spaces: Copy everything except spaces to another string.
4. 'a' - 'A' = 32
5. String problems often reduce to 1 loop and logic inside -- O(n)
6. To compare 2 strings:
    int equal = 1 `raising a counter`
    for loop:
        if any element not equal
            equal = 0 `switching counter to false`

