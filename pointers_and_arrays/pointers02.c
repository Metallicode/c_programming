#include <stdio.h>

void swap(int a, int b); /* args are passed by value... no change after function end */
void swap02(int *a, int *b); 

int main(){

	int x = 1, y = 10;

	swap(x,y);
	printf("x: %d y: %d\n", x, y);
	
	swap02(&x, &y);
	printf("x: %d y: %d\n", x, y);
	
	int *px, *py;
	px = &x;
	py = &y;

	swap02(px, py);
	printf("*px: %d *py: %d\n", *px, *py);
	
	return 0;
}


void swap(int a, int b){

	int temp;
	
	temp = a;
	a = b;
	b = temp;
	
}



void swap02(int *a, int *b){

	int temp;
	
	temp = *a;
	*a = *b;
	*b = temp;
	
}


