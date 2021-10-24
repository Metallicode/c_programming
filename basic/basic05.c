#include <stdio.h>

#define MAX 127

int counter = 0;
char chars[MAX];

int main(){

	while(counter < MAX){
		putchar(chars[counter]+counter);	
		printf("\t%d\n", counter++);
	}
	printf("\nend\n");
	return 0;
}
