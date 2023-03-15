#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    // Allocate memory for an array of n integers
    int* arr = (int*) malloc(n * sizeof(int));
    
    if(arr == NULL) {
        printf("Memory allocation failed!\n");
        return 0;
    }
    
    // Assign values to the array
    for(int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }
    
    // Print the array
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    // Free the allocated memory
    free(arr);
    return 0;
}


//  This program prompts the user to enter the size of an array
//  allocates memory for an array of that size using malloc()
//  assigns values to the array
//  and then prints the array.
//  Finally, it frees the allocated memory using free()
