#include <stdio.h>
#define MAXLINE 1000

int max;
char current_line[MAXLINE];
char longest[MAXLINE];

int getLine(void);
void copyLine(void);

int main() {

    extern int current_len;
    extern int max;
    extern char longest[];

    while((current_len = getLine())>0){
        if(current_len>max){
            max=current_len;
            copyLine();
        }
    }

    if(max>0)
        printf("%s", longest);
    
    return 0;
}

int getLine(void){

    int c, i;
    extern char current_line[];

    for(i = 0; (i< MAXLINE-1) && ((c=getchar())!=EOF) && (c!='\n'); ++i)
        current_line[i] = c;
     
    if(c == '\n'){
        current_line[i]=c;
        ++i;
    }

    current_line[i] = '\0';
    return i;
}

void copyLine(void){

    int i;
    extern char current_line[], longest[MAXLINE];

    i =0;      
    while( (current_line[i] = longest[i]) != '\0')
        ++i;
    
    return;
}