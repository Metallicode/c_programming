#include <stdio.h>

int main(){

	int c;
	
	while((c = getchar()) != 10){
		putchar(c);
	}
	printf("\nend\n");
	return 0;
}
