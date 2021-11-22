#include <stdio.h>

int *getIntPtr(void);
int getInt(void);

int myIntVal = 1000;

int main(){



	int (*myFunc_b)(void);   /* POINTER to func that returns INT */
	myFunc_b = getInt;
	printf("should print the value from getInt: %d\n",myFunc_b() );
	
	
	/////////////////////////////////////////////////////////////////////////////////


	int *(*myFunc_a)(void);      /* pointer to func returns INT POINTER */
	
	myFunc_a = getIntPtr;
	printf("should print the value of myIntVal: %d\n", *myFunc_a() );




	printf("\n");
	return 0;
}


int *getIntPtr (void){

	return &myIntVal;

}


int getInt(void){

	int q = 222;
	return q;

}

