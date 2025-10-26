# Functions
---

## Introduction

1. Prototyping a function above main() and defining the function at botton.  
    ```c  
    #include <stdio.h>

    int add(int a, int b); //prototype
    ```
    Prototype -- above `main()`  
    ```c
    int add(int a, int b) // Function
    {
        return a+b;
    }
    ```  
    Function -- below `main()`  

2. Passing array to a function --> The array name decays into pointer of the first element.
    ```c
    void input(int a, int arr[a]) // for the function

    input(n, array); //for callling the function in main()
    ```  
    