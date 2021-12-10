#include <stdio.h>


int main ()
{

	char **argv;				/* pointer to pointer to char */
	
	int (*daytab)[13];			/* pointer to array[13] of int */
	
	int *daytabb[13];			/* array[13] of pointer to int */

	void *comp(); 				/* function returning pointer to void */
	
	void (*compp)();			/* pointer to function returning void  */
		
	char (*(*x())[])();			/* function returning pointer to array[] of pointer to function returning char */
	
	char (*(*xx[3])())[5];		/* array[3] of pointer to function returning pointer to array[5] of char */
	
	

	printf("\n");
	return 0;
}
