#include <stdio.h>

#define take5 for(int i = 0; i<5; i++)

#define max(a,b) ((a)>(b) ? (a) : (b))

//#define func(i++, j++) /* wrong */
#define squar(x) x*x /* wrong */


#define dprint(expr) printf(#expr " = %g\n", expr) //  # operator
#define paste(front, back) front ## back // paste(name, 01) creates the token name01

int main(void)
{

	take5{
		printf("%d\n", i);
	}
	
	int val01 = 50;gfc
	int val02 = 150;
	
	int bigger = max(val01, val02);
	printf("%d is bigger\n", bigger);

	//notice, this is wrong!
	int z = 3;
	int res = squar(z+1); // 3+1*3+1 == 7...
	printf("res is: %d\n", res);
	
	

	printf("\n");
	return 0;
}


#undef getchar
int getchar(void){}






