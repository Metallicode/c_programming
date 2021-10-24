
#include <stdio.h>


int main(){

	int i;
	int base, step, limit;
	i = 0;
	base = 0;
	step = 5;
	limit = 100;

	while(i<=limit)
		printf("%d\n",i+=step);

	printf("finished executing\n");


	return 0;
}
