#include <stdio.h>

int main(){

	int x = 0;
	
	while (x < 100){	
		printf(">>> %d\n", x++);
		if(x == 10)
			break;	
	}
	
	printf("End\n");
	return 0;
}
