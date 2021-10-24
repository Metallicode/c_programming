#include <stdio.h>

int func01();
int func02(void);
void func03();

int main(){
	int x,z,y;
	y = func01();
	x = func02();
	//z = func03(); /*this will cause error*/
	printf("x: %d\n", x);
	printf("z: %d\n", z);
	printf("y: %d\n", y);
	return 0;
}

/* int is assumed
main(){
}
*/

func01(){
	return;
}

int func02(void){
	return 0;
}

void func03(){
 return;
}
