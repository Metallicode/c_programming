#include <stdio.h>

int main(){
   char c;
   FILE *fp;
   fp=fopen("mytext.txt","w"); 
   printf("enter the text then press enter\n");
   while((c = getchar())!=10){
      putc(c,fp);
   }
   fclose(fp);
   return 0;
}