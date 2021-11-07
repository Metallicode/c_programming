#include <stdio.h>

char *month_name(int n){

	static char *name[] = {
		"Error",
		"January", "February","March",
		"April", "May", "June", 
		"July", "August", "September", 
		"October", "November", "December"
	};
	
	return (n < 1 || n>12) ? name[0] : name[n];

}

int main(){

	printf("%s\n", month_name(1) );
	return 0;	
	
}

