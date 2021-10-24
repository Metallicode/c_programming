#include <stdio.h>
#include <string.h>

#define testStr "This is a test..."


int main(){

	/* for loops */
	
	for(int i = 0; i<5; i++)
		printf("hello\n");
	
	
	
	
	int i = strlen(testStr)-1;
	
	for(; i>=0; i--)
		printf("%c\n", testStr[i]);
	
	
	
	
	i = 0;
	
	for(;;)
	{
		if (i<40)
		{
			printf("i == %d\n",i);
			i++;
		}
		else
		{
			break;
		}
	}
	
	
	
	
	
	for(int j,g = 0; j<5 || g<35; j++, g+=2)
		printf("j = %d, g = %d\n", j , g);
	
	
	
	
	
	
	printf("End\n");
	return 0;
}
