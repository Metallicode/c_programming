#include <stdio.h>

#define MAX 127

int counter = 0;

int main(){

	while(counter < MAX){
		putchar(counter);	
		printf("\t%d\n", counter++);
	}
	printf("\nend\n");
	return 0;
}
