#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAXSTEPSIZE 3

static char modes [] [7] = {

	{'c','d','e','f','g','a','b'}


};

char *get_melody(char m [], int mode, int melody_size);
char get_next(int mode);
time_t t;

int current_step;

int main(int argc, char *argv[]){
	srandom(time(&t));
	long int random(void);
	int m_length = 10;

	char mel [m_length];

	get_melody(mel,0,m_length);

	for(int i = 0; i < m_length; i++)
		printf("%c", mel[i]);

	printf("\n");
	return 0;
}

char *get_melody(char m [], int mode, int melody_size){
	for (int i = 0; i<melody_size; i++){
		m[i] = get_next(mode);
	}
}

char get_next(int mode){
	int s = rand() % MAXSTEPSIZE;
	s = rand() % 2 == 0 ? s : s*-1;
	current_step = current_step + s<0 ? 7 + (current_step + s) : (current_step + s)%7 ;
	return modes[mode][current_step];	
}

