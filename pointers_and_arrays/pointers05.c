#include <stdio.h>

int strln(char *s);
void BackStep(char *s);

int main(){

	char msg[] = "this is a string...";
	
	/*  msg++ won't work! arrays are not pointer variables. but sending it to a function will create a copy of the address to a pointer!   */
	
	printf("length of string: %d\n", strln(msg));
	
	/* BTW... */
	printf("length of sub-string: %d\n", strln(&msg[3]));
	
	/* and you can step back if you really want to */
	BackStep(&msg[1]);

	return 0;	
}


int strln(char *s){

	int n;
	
	for(n=0; *s != '\0'; s++) // s++ for pointer offset
		n++;
		
	return n;

}



void BackStep(char *s){

	printf("%c\n", *(--s)); // s[-1]

}

