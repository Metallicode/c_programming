#include <stdio.h>
#include<string.h>

#define pass "12345"

int main(){

	/* do while */

	char a_word[5];

	do{
	printf ("Enter a word: ");
	scanf ("%s", a_word);
	}while (strcmp(a_word,pass));


	printf("End\n");
	return 0;
}
