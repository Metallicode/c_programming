#include <stdio.h>

void main(){

	float fahr, celsius;
	int low, up, step;

	low = 0;
	up = 300;
	step = 20;

	fahr = low;

	while(fahr <= up){
		celsius = (5.0/9.0)*(fahr-32);
		printf("%3.0f\t%6.1f\n",fahr,celsius);
		fahr+=step;
	}
}


