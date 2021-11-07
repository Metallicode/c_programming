#include <stdio.h>

int echo_01(int argc, char *argv[]);
int echo_02(int argc, char *argv[]);


int main(int argc, char *argv[]){

	echo_01(argc, argv);
	echo_02(argc, argv);
	return 0;	
	
}


int echo_01(int argc, char *argv[]){

	int i; 
	
	for(i=1; i<argc; i++)	
		printf("%s%s",argv[i], (i<argc-1)? " " : "" );
	printf("\n");
	return 0;	

}

int echo_02(int argc, char *argv[]){
	
	while(--argc > 0)
		printf((argc>1) ? "%s " : "%s", *++argv);
	printf("\n");
	return 0;	

}

