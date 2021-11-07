#include <stdio.h>

char *alloc (int n);
void afree(char *p);
void write(char *a,  char *buf);

#define ALLOCSIZE 100

static char allocbuf[ALLOCSIZE];
static char *allocp = allocbuf;


int main(){

	//check  allocbuf and allocp
	printf("allocp: %p\n", allocp);	
	printf("allocbuf: %p\n", allocbuf);	

	//allocate space for 5 chars
	char *test01 = alloc(5);
	
	//print test01 address
	printf("test01: %p\n", test01);

	write( "ABCDE" , test01);

	//print data from test01
	printf(">>test01: %s\n", test01);
	
	//SAME...
	char *test02 = alloc(3);
	write( "xyz" , test02);
	printf(">>test02: %s\n", test02);
	
	//SAME.......	
	char *test03 = alloc(6);
	write( "123456" , test03);	
	
	printf("test01: %s\n", test01);
	printf("test02: %s\n", test02);
	printf("test03: %s\n", test03);
	
	
	
	//print allocbuf
	printf("allocbuf:%s\n", allocbuf);
	
	//free allocated memory
	afree(test03);
	
	
	//SAME..................
	test03 = alloc(4);
	write( "4321" , test03);	

	//print allocbuf
	printf("allocbuf:%s\n", allocbuf);
	
	return 0;	
}


void write(char *a,  char *buf){

	int n = sizeof(a);
	
	for(int i = 0; i< n; i++){
		*(buf+i) = a[i];
	}
	
}



/*  allocate memory in allocbuf */

char *alloc (int n){

	if(allocbuf + ALLOCSIZE - allocp >= n){
		allocp += n;
		return allocp-n;
	}else
		return 0; // only 0 is a valid pointer value and int.  C guarantees ) will never be used as address for data.
		//could use NULL tho...
}


/*  free memory in allocbuf  (move allocp)*/

void afree(char *p){

	if(p >= allocbuf && p < allocbuf + ALLOCSIZE){ 
	// comparison operators (<,>, == ...) can be used only between pointers to the same array
		allocp = p;
	}

}


