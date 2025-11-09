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
4. **Library Query Question**
```
| Expression                      | What it gives you                      | Analogy                                    |
| ------------------------------- | -------------------------------------- | ------------------------------------------ |
| `totalNumofPages`               | Address of the first shelf             | The catalog itself                         |
| `totalNumofPages + i`           | Address of the *i-th* shelf pointer    | Move to the i-th shelf entry in catalog    |
| `*(totalNumofPages + i)`        | Address of the *first book* on shelf i | The shelf itself                           |
| `*(totalNumofPages + i) + j`    | Address of the *j-th book* on shelf i  | Move along the shelf to the j-th book      |
| `*(*(totalNumofPages + i) + j)` | The **actual page count** in that book | Open the book and read the number of pages |
```  
- For the entry inside totalNumofPages.

# 📚 Library Book Query System (C)

A dynamic memory management project in C that simulates a small library system.  
It lets you store, view, and modify data about **shelves**, **books**, and **pages per book** — all using pointers and `malloc()`/`realloc()`.

---

## 🧠 Concepts Covered

- Dynamic memory allocation using `malloc()` and `realloc()`
- Pointers and pointer arithmetic (`*(arr + i)` notation)
- 2D dynamic arrays using `int **`
- Index conversion between human-readable shelf numbers and 0-based array indices
- User-driven data queries

---

## 🏗️ Program Flow

1. **Input Phase**
   - Ask user for number of shelves.
   - Ask books per shelf.
   - Ask number of pages per book.

2. **Display Phase**
   - Prints all shelf/book/page data in a tabular form.

3. **Query Phase**
   - User can perform:
     - **Query 1** → Add a new book to a shelf.
     - **Query 2** → Get number of pages in a specific book.
     - **Query 3** → Get number of books on a shelf.

---

## ⚙️ Key Notes

- `realloc()` takes **two arguments**:
  ```c
  realloc(pointer_to_existing_memory, new_size_in_bytes);

- Arrays in C are `0-indexed`, but user input here is `1-indexed`,  
  so we use expressions like `shelf_number - 1` for correct access.  
- Each shelf is dynamically expandable — memory grows as new books are added.

- This program demonstrates deep pointer and memory concepts in C.
- It’s a great exercise for:
```
1. Understanding pointer arithmetic  

2. Practicing dynamic memory management  

3. Learning multi-level pointers in real use cases  
```  

- Realloc behaves like malloc if you pass a NULL pointer to it.
- we pass address to realloc argument -- `arr = (arr, x*sizeof(int));`