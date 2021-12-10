#include <stdio.h>

float convert(float f_value);

void main(){

	float v = 80;
	float new_value_in_cel;
	new_value_in_cel = convert(v);

	printf("%g\n",new_value_in_cel );
	return;
}

float convert(float f_value){

	float C;
	C = (5.0/9.0)*(f_value-32);
	return C;
}
