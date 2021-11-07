#include <stdio.h>

void charrcopy(char *s, char *t);
void parrcopy(char *s, char *t);

int main(){\

	char *pmessage = "hello metallicode";     /* pointer */
	char message [] = "hello metallicode";     /*   array   */


	printf("%c\n", *pmessage);    // prints first char from Cont string
	printf("%s\n", pmessage);      // prints full string
	

	printf("%c\n", *message);      // prints first char from string array
	printf("%c\n", message[0]);  // prints first char from string array
	printf("%s\n", message);       // prints full string
	
	char messageCopy [17];
	char *pmessageCopy;
	
	charrcopy(messageCopy, "hi4321");
	printf("%s\n", messageCopy);  
	
	parrcopy(messageCopy, "hi 1234");
	printf("%s\n", messageCopy);  
	
	parrcopy(pmessageCopy, "copy to char pointer");  // stack smashing
	printf("%s\n", pmessageCopy);  

	return 0;	
}


void charrcopy(char *s, char *t){

	int i =0;
	while((s[i]=t[i]) != '\0')
		i++;
		
}


void parrcopy(char *s, char *t){

	while(*s++ = *t++)
		;

}
