#include <stdio.h>

#define ARRAY_LENGTH 10

//int numbers[10];

int main(){

	

	int myArry[] = {11,22,33,44,55,66,77,88,99,1010};
	
	printf("%d\n", myArry[0]);
	printf("%d\n", myArry[1]);
	printf("%d\n", myArry[2]);
	
	
	
	//array initialization
	int numbers[ARRAY_LENGTH];
	//static int numbers[10];
	//remember to check global array

	printf("%d\n", numbers[0]);
	printf("%d\n", numbers[1]);
	printf("%d\n", numbers[2]);
	
	
	//array index vs pointer
	printf("array name with no index: %p\n", numbers);
	
	printf("array[0] address: %p\n", &numbers[0]); //also &number
	printf("array[1] address: %p\n", &numbers[1]); 
	printf("array[2] address: %p\n", &numbers[2]); 
	printf("int size: %ld\n", sizeof(int)); 
	
	
	//array pointer + 1 will give us the next value, no matter type size
	printf("myArry[0] value: %d\n", *myArry); 
	printf("myArry[1] value: %d\n", *(myArry+1)); // *myArry+1 is wrong..
	printf("myArry[2] value: %d\n", *(myArry+2)); 
	

	printf("++++++++array iteration++++++++\n");

	for(int i = 0; i<ARRAY_LENGTH; i++){
		printf("%d\n", numbers[i]);
	}


	return 0;
	
}

