#include <stdio.h>

int x = 1; // define x and initial value. global vars must have costant initial values.
int ival; 
float fval;


int main(void)
{

	register int auto_ival; // no initialization in auto vars will hold garbage 
	register long auto_lval;
	register float auto_fval;

	printf("ival %d \n", ival);
	printf("fval %f \n", fval);
	
	printf("auto_ival %d \n", auto_ival);
	printf("auto_lval %ld \n", auto_lval);
	printf("auto_fval %f \n", auto_fval);
	
	
	return 0;
}





