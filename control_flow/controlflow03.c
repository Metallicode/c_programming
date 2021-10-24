#include <stdio.h>

int main(){

	int x = 0;
		
	while(x < 100){
		printf("%d\n", x);
		x += 1;
	}	
		
	printf("~~~~~~~~~~~~~~~~\n");
		
	while(x-- > 1)
		printf("%d\n", x);
	
	printf("~~~~~~~~~~~~~~~~\n");				
			
	while(x < 100){
		printf("%d\n", x);
		x += 1;
		if (x > 50){
			printf("Exit loop\n");
			x--;
			break;
		}
	}
	
	printf("~~~~~~~~~~~~~~~~\n");
		
	while(--x > 0){
		printf("%d ", x);
		if (x >= 30){
			printf("\n");
			continue;
		}
		printf("is less then 30\n");
	}
	
	
	printf("End\n");
	return 0;
}
