#include <stdio.h>

int main(){

	int x = 100;
	//int *ip = x; 		  /* wrong */	
	//int *ip = (int *) x;    /* wrong */	
	int *ip = &x;             /* ok but...  */
	
	int *ip02;
	
	ip02 = &x; 
	
	*ip02 = 1;
	
	printf("%d\n", *ip);

	return 0;
}
