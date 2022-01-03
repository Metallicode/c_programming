#include <stdio.h>

void printMessage(int, int);

int main() {

  printMessage(567, 7);
  return 0;
}

void printMessage(int x, int y){

  printf("%d\n", x*y);
  return;
}
