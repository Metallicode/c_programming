#include <stdio.h>

int main(){

	int x = 0;
	
	while (x < 100){			
		if(++x % 10 == 0)
			continue;	
				
		printf(">>> %d\n", x);		
	}
	
	printf("End\n");
	return 0;
}
