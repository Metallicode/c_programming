#include <stdio.h>

int strln(char *s);

int main(){

	char msg[] = "this is a string...";
	
	printf("length of string: %d\n", strln(msg));

	return 0;	
}


int strln(char *s){

	char *p = s;
	
	while(*p != '\0') 
		p++;
		
	return p-s;

}

