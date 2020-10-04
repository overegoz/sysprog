#include <stdio.h> 
#include <stdlib.h> 

int main() { 
	const int const MY_SIZE=10;
	int *arr; // ptr to array to be malloc'd 
	int i; 
	
	arr = (int*) malloc(sizeof(int)*MY_SIZE);  
	for(i = 0; i < MY_SIZE; i++) { 
		arr[i] = i*2; 
		printf("arr[%d] = %d\n", i, arr[i]); 
	} 
	// free(arr); // free the malloc'd space
	
	return 0; 
}
