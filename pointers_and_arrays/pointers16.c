#include <stdio.h>






int main(){


	int *i_ptr;
	
	/* void pointer can be used as generic type pointer, 
	as long as you cast to correct pointer type before dereferencing*/
	
	void *v_ptr;
	
	int x = 9;
	char c = 'q';
	float f = 2.0;
	
	v_ptr = &x;
	printf("%d\n", *(int *)v_ptr);
	
	v_ptr = &c;
	printf("%c\n", *(char *)v_ptr);
	
	v_ptr = &f;
	printf("%f\n", *(float *)v_ptr);
	
	
	/* will this work..? NO*/
	//i_ptr = &c;
	//printf("%c\n", *(char *)v_ptr);	
	

	printf("\n");
	return 0;
	
}

