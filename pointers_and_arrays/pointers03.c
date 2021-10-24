#include <stdio.h>

void func01(void), func02(void), func03(void), func04(void);

int main(){

	void (*fn)(void);
	
	fn = &func01;	
	fn();
	
	fn = func02; /* we don't need the &, function name is same as address.. */
	fn();
	
	
	
	/*  function pointer array  */
	int i = 4;
	
	void (*fncz[i])(void);
	fncz[0] = func01;
	fncz[1] = func02;
	fncz[2] = func03;
	fncz[3] = func04;
	
	for(i = i-1; i>-1; i--){
		fncz[i]();
	}
	
	printf("\n");	
	return 0;
	
}


void func01(void){
	printf("f01 \n");	
}

void func02(void){
	printf("f02 \n");	
}

void func03(void){
	printf("f03 \n");	
}

void func04(void){
	printf("f04 \n");	
}

