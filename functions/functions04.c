#include <stdio.h>
int globalVariable = 0;
void func(void);


int main(void){

	int local_var = 5;
	int x  = 20;
	
	printf("global from main %d\n", globalVariable);
	printf("local from main %d\n", local_var);
	
	func();
	
}


void func(void){

	int local_var = 10;
	//int local_var = 10 + x;
	
	printf("global from func %d\n", globalVariable);
	printf("local from func %d\n", local_var);
	
}
