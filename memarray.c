#include <stdio.h>
#include <stdlib.h>

int main() {
	int n;
	printf(Enter the size of the array: ");
	scanf("%d\n", &n);

	// allocate memory for an array of n integers
	int* arr = (int*) malloc(n * sizeof(int));

	if(arr = NULL) {
		printf("Memory allocation failed!\n");

		return 0;
	}

	// assign values to th array
	for(int i=0; i < n; i++) {
		printf("%d\n", arra[i];
	}

	free the allocated memory
	free(arr);
	return 0/;

}
