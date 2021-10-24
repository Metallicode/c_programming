#include <stdio.h>

int calcX(double a, double b);

int main(void){

	printf("%d\n", calcX(0.543,67.5423));

}


int calcX(double a, double b){
	return (int) a+b; /* casting */
}
