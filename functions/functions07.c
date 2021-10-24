#include <stdio.h>
#include "functions07.h"

int intFromAux;
int sIntFromAux;
extern int specialNum; 

int main(void){
	
	printf("%d\n", intFromAux);
	printf("%d\n", sIntFromAux);
	printf("%d\n", specialNum);
	printf("------------------\n");
	testFunc01();
	printf("\n");
	testFunc01();
	printf("\n");
	testFunc01();

}

//   gcc functions07.c functions07Aux.c 





