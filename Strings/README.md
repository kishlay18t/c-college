## String Notes

### Introduction
Strings = array of characters. Ends at `'\0'`.  
`char str[50];`

**Input:**
- Without space → `scanf("%s", str);`
- With space → `scanf(" %[^\n]", str);`

**Output:**
1. `printf("%s", str);`
2. 
   ```c
   for (int i = 0; str[i] != '\0'; i++)
       printf("%c", str[i]);
   ```

---

### To remember

1. **Palindrome** → start with `count - 1` (`'\0'`).

2. **Using frequency function to count characters:**
   ```c
   int freq[256] = {0};

   for (i = 0; str[i] != '\0'; i++)
       freq[str[i]]++;

   for (i = 0; i < 256; i++)
       if (freq[str[i]] != 0)
           printf("Frequency of %c = %d\n", str[i], freq[str[i]]);
   ```

3. **To remove white spaces:**  
   Copy everything except spaces to another string.

4. `'a' - 'A' = 32`

5. **String problems often reduce to:**  
   One loop + logic inside → `O(n)`

6. **To compare two strings:**
   ```c
   int equal = 1; // raising a counter

   for (i = 0; str1[i] != '\0'; i++)
       if (str1[i] != str2[i])
           equal = 0; // switching counter to false
   ```
