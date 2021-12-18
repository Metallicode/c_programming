#include <stdio.h>

#define IN 1
#define OUT 0

int main(){

	int c, nw, state;

	state = OUT;
	c = nw = 0;

	while((c = getchar()) != EOF){
		if(c == '\n' || c == '\t' || c == ' ')
			state = OUT;
		else if(state == OUT){
			state = IN;
			++nw;
		}
	}

	printf("number of words is:%d", nw);
	return 0;
}
