#include <stdio.h>

int strcomp(char *s, char *t);

int main(){\

	char text01[] = "hello metallicode";     
	int res = strcomp(text01, "jello metallicode");
	printf("%d\n",res);
	return 0;	
}

/*  sompares char strings s and t lexicographically */ 
int strcomp(char *s, char *t){

	for( ; *s == *t; s++, t++)
		if (*s == '\0')
			return 0;
			
	return *s - *t;

}
