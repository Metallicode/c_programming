#include <stdio.h>

#define myChar 'X'

int main(){

	switch (myChar){
		case 'A': 
			printf("case A\n");
			break;
		case 'B': 
			printf("case B\n");
			break;
		case 'C': 
			printf("case C\n");
			break;		
		default: 
			printf("default\n");
			break;		
	}
	
	return 0;
}
