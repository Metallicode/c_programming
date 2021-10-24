#include <stdio.h>
#include "functions07.h"

int intFromAux = 10;
static int sIntFromAux = 100; //try removing static
extern int specialNum; 

int testFunc01(void){
	static int x = 123;
	printf("%d\n", ++x);
	printf("%d\n", sIntFromAux);
	printf("%d\n", specialNum);
	return 0;
}

