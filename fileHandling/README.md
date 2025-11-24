## Important Notes

- filename  == Name of the file when present in the same directory.  
- access_mode : Specifies for which purpose the file is being opened.  
- fopen : To open a file  
```c
FILE* fptr;

fptr = fopen("file_name", "access_mode");
```
- An if condition is necessary to check if the file opened successfully or not to avoid any possible errors.
```c
if (fptr == NULL)
    printf("The file was not opened.\n");
```  

-  