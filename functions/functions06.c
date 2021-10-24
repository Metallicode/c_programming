#include <stdio.h>

int main(void){

	extern int globalVariableFrom05;

	printf("globalVariableFrom05 %d\n", globalVariableFrom05);

	
}

/* gcc functions05.c functions06.c */
