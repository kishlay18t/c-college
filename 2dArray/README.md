# 2D ARRAYS
---
## Introduction

**Initialisation**  
```c
int arr[1][2];
```
Here, 2 --> Row  
3 --> Column

- Use nested loop (i,j) for Input  
- (0,0) to (r,c)


## To Remember
1.  - if, `initialisation index = 3`  
      then, `index numbers = 0, 1, 2`

    So, be careful when i taking input and initialising.
    ```c
    int r,c;
    int arr[r][c];

    for ( i = 0; i < r; i++)  
    {
        for (j = 0; j < c; j++)
        {
            // take input.
        }
    }
    ```  
    - Don’t reduce dimensions manually — use loops `<` not `< =`

2. **Transpose**  
- Dimensions flip: `r × c → c × r`  
- complexity: `O(r X c)`  
- ```c 
    A[i][j] = B[j][i];
    ```  
3. **Matrix Multiplication**  
- Just reason it out on paper.

4. **Saddle Point**
- good question.  Remember the logic:
```
In 1 iteration  
Find minimum in the row  
record its column index  
use that column index to find maximum of that column by changing row index (for loop).  
```
