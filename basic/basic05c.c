#include <stdio.h>

#define ZERO '0'
#define NDIGITS 10

int main(){

	//declarations
	int c, i, nwhite, nother;
	int ndigit[NDIGITS];

	//assignment
	nwhite = nother = 0;

	//init array
	for(i=0; i<NDIGITS; i++)
		ndigit[i] = 0;

	while((c = getchar())!=EOF){

		if(c >= '0' && c <= '9')
			++ndigit[c-'0'];
		else if(c == '\n' || c == '\t' || c == ' ')
			++nwhite;
		else
			++nother;
	}

	printf("digits = ");
	for(i=0;i<NDIGITS;++i)
		printf("%d ", ndigit[i]);
	printf(", white space = %d, other = %d\n", nwhite, nother);

}
