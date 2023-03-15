// Memory allocation
// the syntax for malloc() is; void* malloc(size_t size);
// here 'size is the number of bytes of memory to allocate
// 'malloc() function returns a pointer to the start of the allocated memory block, or NULL if the allocation fails.

// example: the following code dynamically allocates an array of 10 integers

#include <stdlib.h>

int main() {
    int* array = (int*) malloc(10 * sizeof(int));
    if (array == NULL) {
        // allocation failed
        exit(1);
    }
    // use the allocated memory block
    array[0] = 42;
    // free the memory when done using it
    free(array);
    return 0;
}

// malloc() fn allocates a block of memory tha can hold 10 integers
// the sizeof(int) expression is used to determine the size of each integer which is usually 4 bytes 
// we check if the allocation was successful by checking if it returned NULL
// If it is, we exit the program with an error code
// If the allocation is successful, we can use the allocated memory block as needed
// Finally, we free the memory by calling the free() function to release the memory back to the system

