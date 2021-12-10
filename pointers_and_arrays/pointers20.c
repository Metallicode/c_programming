#include <stdio.h>

#define LEN 3

void ** unspecified_type_mtx_pointer;
  
int main ()
{

	//////////////////////INT MATRIX///////////////////////

	int arr01[] = {1,2,3};
	int arr02[] = {3,4,5};
	int arr03[] = {6,7,8};
	
	int *i_array[LEN];

	i_array[0] = arr01;
	i_array[1] = arr02;
	i_array[2] = arr03;
	
	
	unspecified_type_mtx_pointer = (void *)i_array;
	
	for(int i = 0; i < LEN; i++ ){
		for(int j = 0; j < LEN; j++ )
			printf("%d ", *(int *)((int *)(unspecified_type_mtx_pointer[i])+j));		
		printf("\n");
	}
	
	printf("\n");

	//////////////////////CHAR MATRIX///////////////////////
	
	char arr04[] = {'a','b','c'};
	char arr05[] = {'d','e','f'};
	char arr06[] = {'g','h','i'};
	
	char *c_array[LEN];

	c_array[0] = arr04;
	c_array[1] = arr05;
	c_array[2] = arr06;
	
	
	unspecified_type_mtx_pointer = (void *)c_array;
	
	for(int i = 0; i < LEN; i++ ){
		for(int j = 0; j < LEN; j++ )
			printf("%c ", *(char *)((char *)(unspecified_type_mtx_pointer[i])+j));		
		printf("\n");
	}	
	
	
     
	printf("\n");
	return 0;
}
