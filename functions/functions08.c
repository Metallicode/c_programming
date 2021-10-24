#include <stdio.h>
#include <time.h>

int main(void)
{

    clock_t start = clock();

    register int x; //only automatic vars
    
    while (x<10000000){
    
    	x++;
    
    }

    printf("time passed: %Lg sec.\n",(clock() - start) / (long double) CLOCKS_PER_SEC);

    return 0;
}





