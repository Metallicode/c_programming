#include <stdio.h>

int main(){

	int x = 1, y = 2, z[10];
	z[0] = 555;
	
	int *ip; 		/* ip is a pointr to int */	
	ip = &x;	 	/* ip points to x */	
	y = *ip; 		/* y is now 1 */	
	*ip = 0; 		/* x is now 0 */

	printf("%d\n", *ip);
	
	ip = &z[0];		/* ip points to z[0] */
	
	printf("%d\n", *ip);

	return 0;
}
