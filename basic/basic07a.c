#include <stdio.h>

void myFunc01(int);         //function with int parameter
void myFunc02(int *);       //function with int pointer parameter

int main() {

    int myInt;
    myInt = 1;

    printf("myInt starts:\t\t %d\n", myInt);        //print myInt value

    printf("myInt address:\t\t %p\n", &myInt);      //print myInt address

    myFunc01(myInt);                                //call myFunc01
    printf("myInt from main:\t %d\n", myInt);       //print myInt value
    printf("***********************\n");            //print myInt value

    myFunc02(&myInt);                               //call myFunc02
    printf("myInt from main:\t %d\n", myInt);       //print myInt value

    printf("\n");
    return 0;
}

void myFunc01(int x){
    printf("x from myFunc01 address: %p\n", &x);
    ++x;
    printf("from myFunc01:\t\t %d\n", x);
    return;
}

void myFunc02(int * x){
    printf("x from myFunc02 address: %p\n", &x);
    *x+=10;
    printf("from myFunc02:\t\t %d\n", *x);
    return;
}