#include <stdio.h>

int main () {
   char c;

   printf("enter character: ");
   /* int getc(FILE *stream) */
   c = getc(stdin);
   printf("char entered: ");
   putc(c, stdout);
   printf("\n");
   
   return(0);
}