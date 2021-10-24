
#include <stdio.h>

int main(){


	int x = 5;
	
	if(x < 9)
		printf("OPTION01\n");
	else
		printf("OPTION02\n");
		
		
	
	
	if (!(x % 2)){ //notice no x%2==0 is requierd
		printf("x is divisible by 2\n");
	}
	
	
	
	if (x < 2)
		printf("x < 2\n");
	else if (x >= 2 && x < 6)
		printf("x >= 2 && x < 6\n");
	else
		if (x == 6)
			printf("x == 6\n");
		else
			printf("x >= 6\n");
	
	
	
	return 0;
	
}
