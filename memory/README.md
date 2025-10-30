## Memory Allocation
---

1. **Heap vs Stack**  
**Stack**  
- Stack is temporary stack of memory that gets called upon when a function is executed.  
- And the memory used for stack in function, for array or any variable is a local variable that can not be carried outside.  
- After the function or process has been executed, the memory block becomes unused.
- Easier to keep track of and faster  
- Stack is attached to a thread, so when the thread exits, the stack is reclaimed.  

**Heap**
- It's the memory set aside for dynamic allocation.
- Harder to keep track of and slower.
- The memory used for heap stays as a global variable and can be used outside of function until it is freed.

2. **Stack array**
```c
int array[n] = //input.
```  
**Heap Array**
```c
int *array = malloc(arraysize * sizeof(int)); //For allocating memory

array = realloc(array, increased_size * sizeof(int)); // For expanding or decreasing allocated size.
```  

3. **Comparison**
```c
Feature	            VLA (int arr[n];)	     malloc (int *arr = malloc(n * sizeof(int));)
Memory location	          Stack	                                Heap
Resizable later	           ❌ No	                            ✅ Yes (via realloc)
Lifetime	            Ends when function                  ends Until you free() it
Portability	               Optional feature	                Always available in C
Syntax simplicity	        ✅ Easier	                ⚠️ More code but more control
```  
  