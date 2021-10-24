#include <stdio.h>

int calc(int a, int b);

int funcA(void);
int funcB(void);

int global_var;

int main() {

	global_var = 0;

	//int x = calc(3,4)*3;
	
	//int x = 5;
	//x += 2;		 //x = x + 2
	
	//int x = 3 + 5 * 2;
	//int x = (3 + 5) * 2;
	
	//int x = 6 < 12 * 2; // 1 == 6 < (24)
	//int x = (6 < 12) * 2; // 2 == (1) *  2
	
	//int x = 5;
	//printf("%d  %d\n", ++x, calc(x,3)); 	//wrong
	
	int x = funcA() + funcB();

	
	printf("%d\n",x);
	return 0;
}


int funcA(void){
	++global_var;
	return global_var;
}

int funcB(void){
	global_var *=2;
	return global_var;
}


int calc(int a, int b){
	return a+b;
}
