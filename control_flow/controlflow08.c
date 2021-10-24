#include <stdio.h>

int main(){

	int myGuess = 29;
	int x;
	int nums [] = {12,43,54,65,76,34,56,24};
	
	start:

	for(x=0; x < 8; x++){
		if(nums[x]==myGuess){
			printf("OK!!\n");
			goto end;	
		}
	}
	
	printf("%d not found...\n",myGuess);
		
	mid:
		printf("will try again with %d..\n", ++myGuess);
		goto start;

	end:
		printf("this will happen anyway\n");
		
	printf("Don't use goto!!\n");
	return 0;
}
