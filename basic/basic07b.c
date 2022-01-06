#include <stdio.h>

//void changeArray(char []);
void changeArray(char *);

int main() {
    int i;
    //changeArray("test 1 2 3"); // literal will make error!

    char msg [] = "test 1 2 3";
    printf("original:\t %s\n", msg);

    changeArray(msg);

    printf("after changeArray:\t %s\n", msg);
    printf("\n");
    return 0;
}

void changeArray(char * chars){

    chars[0]= 'x';
    chars[1]= 'y';
    chars[2]= 'z';

    printf("inside myFunc:\t %s\n", chars);
    return;
}