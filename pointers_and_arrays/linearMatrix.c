#include <stdio.h>

#define SIZE 30

void printMatrix();
void render(int *line[2]);

int mtx[SIZE][SIZE];

int main(){

	int  x[] =  {1,20};
	int  y[] =  {15,10};
	int  *l[2] = {x , y};
	
	render(l);
	
	int  q[] = {11,2};
	int  z[]=  {25,18};
	l[0] = q;
	l[1] = z;
	
	render(l);	
	
	printMatrix();
	return 0;
}


void render(int *line[2]){

	float a = ((float)(line[1][1] - line[0][1]) / (float)(line[1][0] - line[0][0]));	
	float b = line[0][1] - (a*line[0][0]);
	
	for(int i = line[0][0]; i< line[1][0]; i++){
		int y =  (int)(a*i)+b;	 //y = ax + b
		mtx[i][y] = 1;
	}
	
}

void printMatrix(){

	int i, j;
	
	for(i=0 ; i<SIZE; i++){
		for(j=0 ; j<SIZE; j++)
			printf("%d ", mtx[i][j]);
		printf("\n");
	}
			
}
